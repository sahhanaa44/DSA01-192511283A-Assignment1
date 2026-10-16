# Task 03 – Data Types and Floating-Point Precision

## 1. Aim
To study C++ data types, memory usage, maximum values, and floating-point precision.

## 2. Data Types
C++ provides different data types to store values. The `int` data type stores integers, while `long long` stores larger integer values. The `double` data type stores decimal values.

The `sizeof()` operator is used to find the memory occupied by a data type.

## 3. Maximum Values
The `INT_MAX` constant gives the maximum value that an `int` can store. The `LLONG_MAX` constant gives the maximum value that a `long long` can store. These values are available through the `climits` header file.

## 4. Floating-Point Precision
The program adds `0.1` ten times using a `double` variable. Floating-point numbers may not be represented exactly in binary, which can cause small precision errors.

## 5. Fare Representation
The program calculates a fare in paise using integer arithmetic. Storing money in paise avoids many decimal precision problems that can occur when using floating-point values.

## 6. Program Output
The program displays the sizes of `int` and `long long`, their maximum values, the result of adding `0.1` ten times, and a fare converted into paise.

The exact data type sizes depend on the system and compiler.

## 7. Conclusion
This task demonstrates C++ data types, memory usage, integer limits, and floating-point precision. Integer arithmetic is useful for representing metro fares accurately.