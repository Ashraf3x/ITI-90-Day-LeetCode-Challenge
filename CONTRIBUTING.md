# 🤝 Contributing Guide

Welcome! This guide explains how to submit your solutions to the **ITI 90-Day LeetCode Challenge (Intake 46)** repo.

---

## 📁 Folder Structure

```
Week-01/
├── README.md              ← problems list + links for this week
├── TwoSum_Ashraf.cpp
├── TwoSum_Mamdouh.py
├── FizzBuzz_Youssef.js
└── ...
```

---

## ✅ Step-by-Step

### 1️⃣ Fork & Clone
```bash
git clone https://github.com/YOUR_USERNAME/REPO_NAME.git
cd REPO_NAME
git checkout -b week-XX-YourName
```

### 2️⃣ Go to the right week folder
```bash
cd Week-01
```

### 3️⃣ Create your solution file

**Naming format:** `ProblemName_YourName.ext`

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
- `ValidParentheses_Ashraf.cpp`
- `DailyTemperatures_Mamdouh.py`
- `ReverseLinkedList_Youssef.js`
- `TwoSum_Kareem.cs`

### 4️⃣ Add the standard header

```cpp
// Author: Ahmed Ashraf
// Problem: Valid Parentheses
// Link: https://leetcode.com/problems/valid-parentheses/
// Approach: Stack — push open brackets, pop on matching close
// Time: O(n) | Space: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') st.push(c);
            else {
                if (st.empty()) return false;
                char top = st.top(); st.pop();
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) return false;
            }
        }
        return st.empty();
    }
};
```

### 5️⃣ Commit & Push
```bash
git add .
git commit -m "[Week-01] ValidParentheses - Ahmed"
git push origin week-01-Ahmed
```

### 6️⃣ Open a Pull Request

Title format: `[Week-XX] ProblemName - YourName`

Example: `[Week-01] Valid Parentheses - Ahmed Ashraf`

---

## ❌ What Will Be Rejected

- ❌ Missing the header comment
- ❌ Wrong file name format
- ❌ Duplicate solution (same problem + same person already submitted)
- ❌ Code that doesn't compile/run
- ❌ Solution with no actual logic (just copied template)

---

## 🌟 Tips for Getting Pinned as Best Solution

- Clean, readable code with good variable names
- Comments explaining the key insight
- Optimal time & space complexity
- Bonus: solve in multiple languages!

---

## 🙋 Need Help?

Ask in the WhatsApp group or open a GitHub Issue!
