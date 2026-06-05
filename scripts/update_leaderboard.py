import os
import re

PROBLEM_FOLDER = re.compile(r"^\d{2}-")
SKIP_NAMES = {"readme.md", ".gitkeep"}
SOLUTION_EXTENSIONS = {
    ".c", ".cpp", ".cc", ".cxx", ".py", ".java", ".kt", ".kts", ".scala",
    ".groovy", ".js", ".mjs", ".jsx", ".ts", ".tsx", ".cs", ".fs", ".fsx",
    ".vb", ".go", ".rs", ".zig", ".nim", ".d", ".v", ".swift", ".m", ".mm",
    ".rb", ".php", ".lua", ".pl", ".pm", ".tcl", ".hs", ".ml", ".mli", ".clj",
    ".erl", ".ex", ".exs", ".dart", ".r", ".R", ".jl", ".pas", ".cr", ".coffee",
    ".f90", ".f95", ".adb",
}

TOTAL_WEEKS = 13


def is_solution_file(filename: str) -> bool:
    if filename.startswith(".") or filename.lower() in SKIP_NAMES:
        return False
    _, ext = os.path.splitext(filename)
    return ext.lower() in SOLUTION_EXTENSIONS


def author_from_filename(filename: str) -> str | None:
    """YourName.ext inside a problem folder."""
    stem = os.path.splitext(filename)[0]
    if not stem or "_" in stem:
        return None
    return stem.strip().capitalize()


def author_from_legacy(filename: str) -> tuple[str, str] | None:
    """ProblemName_Author.ext at week root (backward compatible)."""
    stem = os.path.splitext(filename)[0]
    parts = stem.split("_")
    if len(parts) < 2:
        return None
    author = parts[-1].strip().capitalize()
    problem = "_".join(parts[:-1])
    return author, problem


def main():
    # author -> set of (week, problem_id) — unique problems count
    solved: dict[str, set] = {}
    # author -> total file count (all languages)
    file_counts: dict[str, int] = {}

    weeks_with_solutions: set[str] = set()
    total_solution_files = 0

    week_folders = sorted(
        d for d in os.listdir(".") if os.path.isdir(d) and d.startswith("Week-")
    )

    for week in week_folders:
        week_path = os.path.join(".", week)
        week_has_solutions = False

        for entry in os.listdir(week_path):
            entry_path = os.path.join(week_path, entry)

            if os.path.isdir(entry_path) and PROBLEM_FOLDER.match(entry):
                for fname in os.listdir(entry_path):
                    if not is_solution_file(fname):
                        continue
                    author = author_from_filename(fname)
                    if not author:
                        continue
                    solved.setdefault(author, set()).add((week, entry))
                    file_counts[author] = file_counts.get(author, 0) + 1
                    week_has_solutions = True
                    total_solution_files += 1
                continue

            if os.path.isfile(entry_path) and is_solution_file(entry):
                legacy = author_from_legacy(entry)
                if legacy:
                    author, problem = legacy
                    solved.setdefault(author, set()).add((week, problem))
                    file_counts[author] = file_counts.get(author, 0) + 1
                    week_has_solutions = True
                    total_solution_files += 1

        if week_has_solutions:
            weeks_with_solutions.add(week)

    # ── Stats ──────────────────────────────────────────────────────────────
    weeks_active = len(weeks_with_solutions)
    active_contributors = len(solved)

    stats_content = (
        f"\n| 📅 Weeks Active | 🧩 Total Solutions | 👥 Active Contributors |\n"
        f"| :---: | :---: | :---: |\n"
        f"| {weeks_active} / {TOTAL_WEEKS} | {total_solution_files} | {active_contributors} |\n"
    )

    # ── Leaderboard table ──────────────────────────────────────────────────
    # Sort by unique problems solved, then by total files as tiebreaker
    sorted_users = sorted(
        solved.keys(),
        key=lambda a: (len(solved[a]), file_counts.get(a, 0)),
        reverse=True,
    )

    rank_medals = {1: "🥇", 2: "🥈", 3: "🥉"}

   all_participants = set(solved.keys()) | set(file_counts.keys())

sorted_users = sorted(
    all_participants,
    key=lambda author: (len(solved.get(author, [])), file_counts.get(author, 0)),
    reverse=True
)

table_content = "\n| Rank | Participant | Problems Solved | Total Solutions (Including Multi-language) |\n"
table_content += "| :---: | :---: | :---: | :---: |\n"

for rank, author in enumerate(sorted_users, 1):
    rank_label = rank_medals.get(rank, f"`{rank}`")
    problems = len(solved.get(author, []))
    files = file_counts.get(author, 0)
    
    files_display = f"{files}" if files > problems else f"{files}"
    
    table_content += f"| {rank_label} | **{author}** | {problems} | {files_display} |\n"

if not sorted_users:
    table_content += "| - | No solutions merged yet | 0 | 0 |\n"

    # ── Write to README ────────────────────────────────────────────────────
    readme_path = "README.md"
    if not os.path.exists(readme_path):
        print("README.md not found!")
        return

    with open(readme_path, "r", encoding="utf-8") as f:
        content = f.read()

    # Replace stats block
    if "<!-- STATS_START -->" in content and "<!-- STATS_END -->" in content:
        stats_pattern = r"(<!-- STATS_START -->).*?(<!-- STATS_END -->)"
        content = re.sub(
            stats_pattern,
            f"\\1\n{stats_content}\n\\2",
            content,
            flags=re.DOTALL,
        )
        print(f"Stats updated: {weeks_active}/{TOTAL_WEEKS} weeks | {total_solution_files} solutions | {active_contributors} contributors")
    else:
        print("Warning: STATS markers not found in README.md — skipping stats update.")

    # Replace leaderboard block
    if "<!-- LEADERBOARD_START -->" in content and "<!-- LEADERBOARD_END -->" in content:
        lb_pattern = r"(<!-- LEADERBOARD_START -->).*?(<!-- LEADERBOARD_END -->)"
        content = re.sub(
            lb_pattern,
            f"\\1\n{table_content}\n\\2",
            content,
            flags=re.DOTALL,
        )
        print("Leaderboard table updated successfully.")
    else:
        print("Warning: LEADERBOARD markers not found in README.md — skipping leaderboard update.")
        return

    with open(readme_path, "w", encoding="utf-8") as f:
        f.write(content)

    print("README.md written successfully!")


if __name__ == "__main__":
    main()
