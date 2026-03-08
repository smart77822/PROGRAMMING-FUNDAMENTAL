# Copilot instructions for this repository

Purpose: help AI coding assistants be immediately productive with this student-style C++ examples repository.

- Repo shape: many single-file C++ programs at the repo root and grouped by week under `Week 1/`, `Week 2/`, `Week 3/`, etc. Examples: [example6.cpp](example6.cpp) and [Week 2/header.cpp](Week%202/header.cpp).
- Typical pattern: standalone programs (one `.cpp` contains `main()`), simple use of `<iostream>`, `cout`/`cin`, and ASCII output. Expect many files to compile/run independently rather than as a single project.

Quick guidance
- When changing or running code, treat each `.cpp` as a self-contained example. Compile with a single-file command (example):

```bash
g++ -std=c++17 -O2 -Wall "Week 2/spacecraft.cpp" -o spacecraft.exe
./spacecraft.exe
```

- On Windows with MSVC: `cl /EHsc "Week 2\\spacecraft.cpp"` then run produced `.exe`.
- If a file includes non-standard headers (graphics libs), inspect the top-of-file includes to determine needed libraries/flags. Do not assume a build system exists.

Project-specific patterns to preserve
- Keep changes minimal and local: many solutions are short classroom exercises; refactor only when improving clarity or correctness.
- Watch for files named `header.cpp` used as display or demo art (see [Week 2/header.cpp](Week%202/header.cpp)). These are content artifacts, not shared headers.
- Naming: files follow `taskN.cpp`, `exampleN.cpp`, `game.cpp`, `pacman.cpp` — expect varied naming and many duplicates across week folders.

What I looked for (no findings)
- No `Makefile`, `CMakeLists.txt`, or CI config detected—assume ad-hoc compilation.
- No tests or test harness found; treat runtime checks as manual (compile + run).

How to decide when to add a project-level build
- Add a `CMakeLists.txt` or similar only if multiple files form a single program or if the user asks to consolidate multiple samples into a project. Ask before introducing external dependencies.

Editing conventions for AI agents
- Prefer small, self-contained diffs that modify one example at a time.
- When suggesting fixes, include a one-line rationale and a single `g++` command demonstrating how to compile and run the updated example.
- If adding dependencies (SDL, SFML, etc.), list required install steps and platform notes, and get user approval.

Relevant example files to inspect first
- [example6.cpp](example6.cpp) — simple `iostream` input example.
- [Week 2/header.cpp](Week%202/header.cpp) — ASCII art, typical of presentation tasks.

If anything here is unclear or you'd like different scope (e.g., scaffold a CMake project or add CI), tell me which target files to focus on and I'll update these instructions.
