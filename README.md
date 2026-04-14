# ⚙️ C Playground

A personal learning space for C programming basics — built while I learn step by step.

This repo is basically my **living notebook** for C:

* if/else logic
* input handling with `scanf`
* loops (coming soon)
* functions (coming soon)
* random experiments while I learn

Nothing fancy. Just raw progress.

---

## 🚀 Purpose

This repo exists to:

* Practice C fundamentals
* Keep examples organized
* Build muscle memory with syntax
* Track my learning journey over time

Think of it like:

> “GitHub but for my brain compiling C code”

---

## 📁 Structure

Right now it's simple:

```
c-playground/
│
├── basics/
│   ├── arrays
│   ├── if-else
│   ├── input-scanf
│   ├── loops
│   ├── pointers
│   ├── strings(char)    
│   └── variables
│
└── README.md
```

More folders will appear as things get more advanced.

---

## 🧠 Current Topics

### ✔️ Basics

* Variables
* `printf`
* `scanf`
* `if / else`
* Comparisons
* Simple programs


---

## 🛠️ How to Compile & Run (GCC)

### 🔹 Step 1: Compile your program

```bash
gcc filename.c -o output
```

Example:

```bash
gcc basics/if-else.c -o ifelse
```

### 🔹 Step 2: Run it

```bash
./output
```

Example:

```bash
./ifelse
```

---

## ⚡ Using Code Runner (VS Code)

If you're using **Code Runner extension**, you can run C files instantly:

### ✔️ Setup

1. Install **Code Runner** extension in VS Code
2. Make sure GCC is installed and added to PATH
3. Open a `.c` file

### ▶️ Run

* Click **Run Code**
* Or use shortcut:

```
Ctrl + Alt + N
```

### 💡 Tip

If input (`scanf`) doesn’t work properly in Code Runner:

* Enable "Run In Terminal" in settings:

```json
"code-runner.runInTerminal": true
```

---

## 📌 Notes

* This repo is a **learning sandbox**, not production code
* Expect messy experiments
* Expect broken stuff
* That’s the point

---

## 🧠 Final Thought

No rush. Just consistency.
