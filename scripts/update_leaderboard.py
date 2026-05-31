import os
import re

def main():
    user_counts = {}
    week_folders = [d for d in os.listdir('.') if os.path.isdir(d) and d.startswith('Week-')]
    
    for folder in week_folders:
        for file in os.listdir(folder):
            if file.lower() == 'readme.md' or file.startswith('.'):
                continue
            
            filename_without_ext = file.rsplit('.', 1)[0]
            parts = filename_without_ext.split('_')
            if len(parts) >= 2:
                author = parts[-1].strip().capitalize()
                user_counts[author] = user_counts.get(author, 0) + 1

    sorted_users = sorted(user_counts.items(), key=lambda x: x[1], reverse=True)

    table_content = "\n| Rank | ✨ Participant | 📈 Problems Solved | Status |\n"
    table_content += "| :---: | :--- | :---: | :---: |\n"
    
    for rank, (user, count) in enumerate(sorted_users, 1):
        emoji = "🏆" if rank == 1 else "🥈" if rank == 2 else "🥉" if rank == 3 else "🔥"
        table_content += f"| {rank} | **{user}** | {count} | {emoji} |\n"

    if not sorted_users:
        table_content += "| - | No solutions merged yet | 0 | 🎯 |\n"

    readme_path = 'README.md'
    if os.path.exists(readme_path):
        with open(readme_path, 'r', encoding='utf-8') as f:
            content = f.read()

        pattern = r"()(.*?)()"
        replacement = f"\\1\n{table_content}\n\\3"
        updated_content = re.sub(pattern, replacement, content, flags=re.DOTALL)

        with open(readme_path, 'w', encoding='utf-8') as f:
            f.write(updated_content)
        print("✅ Leaderboard successfully updated in README.md!")
    else:
        print("❌ README.md not found!")

if __name__ == '__main__':
    main()