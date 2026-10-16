# Task 02 – Tokens, Keywords, Identifiers and Constants

## 1. Aim
To understand C++ tokens, keywords, identifiers and constants, and compare `#define` with `constexpr`.

## 2. Tokens
Tokens are the smallest individual units of a C++ program. They include keywords, identifiers, constants, operators and symbols.

Examples:
- `int`, `return` – Keywords
- `main`, `fare` – Identifiers
- `1000` – Constant
- `+`, `=` – Operators

## 3. Keywords and Identifiers
Keywords are reserved words in C++ with predefined meanings, such as `int`, `return` and `enum`.

Identifiers are names given to variables, functions and other program elements. Examples include `main`, `zoneNumber` and `fare`.

## 4. Constants
Constants are values that do not change during program execution. In this task, `constexpr` is used to define compile-time constants for metro fares, peak surcharge and minimum balance.

The `enum class Zone` defines the three metro zones: Inner, Middle and Outer.

## 5. Comparison of #define and constexpr
`#define` is a preprocessor directive that replaces a name with a value before compilation. It does not provide normal C++ type checking.

`constexpr` defines a typed constant that can be evaluated at compile time. It is generally safer and easier to maintain in C++ programs.

## 6. Program Output
The main program displays the Inner Zone base fare, peak surcharge and minimum balance.

The macro version displays the fare defined using `#define`.

## 7. Conclusion
This task demonstrates C++ tokens, keywords, identifiers and constants. It also shows why `constexpr` is generally preferred over `#define` for typed constants in modern C++.