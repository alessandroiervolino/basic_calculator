# Basic Calculator in C

A simple **command-line calculator** written in **C** with a modular structure.

This project demonstrates:
- Modular programming using `.c` and `.h` files
- Functions for **addition, subtraction, multiplication, and division**
- Input validation (invalid options, division by zero)
- A clear and user-friendly menu

---

## 🛠 Project Structure

basic_calculator/
├─ basic_calculator.c # Main program with the menu
├─ basic_operations.c # Implementation of arithmetic functions
├─ basic_operations.h # Function declarations
├─ README.md # Project documentation

---

## ⚡ How to Compile

Make sure all files are in the same folder, then run:

```bash
gcc basic_calculator.c basic_operations.c -o calculator
``` 
Then run the program:
```bash
./calculator
```

💻 Usage

The program shows a menu:

ADD

SUBTRACT

MULTIPLY

DIVIDE

EXIT

It asks for two numbers and shows the result.
If you try to divide by zero or select an invalid option, the program handles it gracefully.

🚀 Why This Project

This project is part of my learning path in C programming.
It demonstrates my ability to:

Write modular code

Handle user input safely

Organize projects in a professional way

📌 Author

Alessandro – Aspiring software engineer