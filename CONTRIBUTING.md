# 🤝 Contributing Guide

Welcome! This guide explains how to submit your solutions to the **ITI 90-Day LeetCode Challenge (Intake 46)** repo.

---

## 📁 Folder Structure

Each week is split into **days** (see that week's `README.md`). Every problem has its own folder; everyone adds solutions inside it using **your name as the file name**.

```
Week-01/
├── README.md
├── 01-Baseball Game/
│   ├── Ashraf.cpp
│   ├── Ashraf.js
│   ├── Mamdouh.cpp
│   └── Mamdouh.cs
├── 02-Backspace String Compare/
│   └── ...
├── 03-Valid Parentheses/
│   └── ...
└── ...
```

**Problem folder format:** `NN-Problem Name` (e.g. `04-Remove All Adjacent Duplicates In String`)

**Solution file format:** `YourName.ext` (e.g. `Ashraf.cpp`, `Mamdouh.py`, `Sara.cs`)

- One file per person per language for that problem
- Multiple languages from the same person = multiple files (`Ashraf.cpp`, `Ashraf.py`)

---

## ✅ Step-by-Step

### 1️⃣ Fork & Clone
```bash
git clone https://github.com/YOUR_USERNAME/ITI-90-Day-LeetCode-Challenge.git
cd ITI-90-Day-LeetCode-Challenge
git checkout -b week-01-YourName
```

### 2️⃣ Open the problem folder
```bash
cd Week-01/04-Remove\ All\ Adjacent\ Duplicates\ In\ String
```
Or on Windows:
```bash
cd "Week-01/04-Remove All Adjacent Duplicates In String"
```

### 3️⃣ Create your solution file

**Naming:** `YourName.ext` — use your first name or nickname (consistent across the challenge).

| Language | Extension(s) |
|----------|----------------|
| C | `.c` |
| C++ | `.cpp`, `.cc`, `.cxx` |
| C# | `.cs` |
| Clojure | `.clj` |
| CoffeeScript | `.coffee` |
| Crystal | `.cr` |
| D | `.d` |
| Dart | `.dart` |
| Elixir | `.ex`, `.exs` |
| Erlang | `.erl` |
| F# | `.fs`, `.fsx` |
| Fortran | `.f90`, `.f95` |
| Go | `.go` |
| Groovy | `.groovy` |
| Haskell | `.hs` |
| Java | `.java` |
| JavaScript | `.js`, `.mjs`, `.jsx` |
| Julia | `.jl` |
| Kotlin | `.kt`, `.kts` |
| Lua | `.lua` |
| Nim | `.nim` |
| Objective-C | `.m`, `.mm` |
| OCaml | `.ml`, `.mli` |
| Pascal | `.pas` |
| Perl | `.pl`, `.pm` |
| PHP | `.php` |
| Python | `.py` |
| R | `.r`, `.R` |
| Ruby | `.rb` |
| Rust | `.rs` |
| Scala | `.scala` |
| Swift | `.swift` |
| Tcl | `.tcl` |
| TypeScript | `.ts`, `.tsx` |
| V | `.v` |
| VB.NET | `.vb` |
| Zig | `.zig` |
| Ada | `.adb` |

If your language is not listed, open an issue — we can add more extensions.

**Examples:**
- `Week-01/03-Valid Parentheses/Ashraf.cpp`
- `Week-01/10-Daily Temperatures/Mamdouh.py`
- `Week-03/01-Reverse Linked List/Youssef.js`

### 4️⃣ Add the standard header

```cpp
// Author: Ashraf
// Problem: Remove All Adjacent Duplicates In String
// Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// Time: O(n) | Space: O(n)

class Solution {
public:
    string removeDuplicates(string s) {
        // your code
    }
};
```

### 5️⃣ Commit & Push
```bash
git add .
git commit -m "[Week-01] Remove All Adjacent Duplicates In String - Ashraf"
git push origin week-01-Ashraf
```

### 6️⃣ Open a Pull Request

**Title format:** `[Week-XX] Problem Name - YourName`

**Example:** `[Week-01] Remove All Adjacent Duplicates In String - Ashraf`

---

## ❌ What Will Be Rejected

- ❌ Missing the header comment (`Author:`, `Link:`, etc.)
- ❌ Wrong location (file not inside the correct `NN-Problem Name/` folder)
- ❌ Wrong file name (must be `YourName.ext`, not `ProblemName_YourName.ext`)
- ❌ Duplicate file (same problem + same person + same extension already exists)
- ❌ Code that does not compile/run
- ❌ Solution with no actual logic (template only)

---

## 🌟 Tips for Getting Pinned as Best Solution

- Clean, readable code with good variable names
- Comments explaining the key insight
- Optimal time & space complexity
- Bonus: solve in multiple languages (`Ashraf.cpp`, `Ashraf.py`, …)

---

## 🙋 Need Help?

Ask in the WhatsApp group or open a GitHub Issue!
