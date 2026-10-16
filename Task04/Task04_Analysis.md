# Task 04 – Control Implicit Conversions

## 1. Aim
To identify implicit type conversions in C++, predict program output, and compare implicit conversions with explicit conversions using `static_cast`.

## 2. Integer Division and Double Conversion
In the expression `a / b`, both operands are integers. Therefore, `7 / 2` produces `3`, not `3.5`. Assigning the result to a `double` does not restore the discarded fractional part.

Using `static_cast<double>(a) / b` converts `a` to a double before division, producing `3.5`.

## 3. Character-to-Integer Promotion
The expression `'A' + 2` performs arithmetic using the character's integer representation. The result is converted to a `char`, giving `C`.

When `ch + 1` is evaluated, `ch` is promoted to an integer. The output is `68`.

## 4. Integer-to-Bool Conversion
The statement `bool flag = 5;` converts the non-zero integer to `true`.

By default, a Boolean value is printed as `1` or `0`. The manipulator `std::boolalpha` changes the display to `true` or `false`.

## 5. Signed and Unsigned Comparison
The expression `s < u` compares a signed integer with an unsigned integer. The signed value `-1` is converted to an unsigned value, so the comparison does not behave like an ordinary comparison between two signed integers.

The expression evaluates to false, and the program prints `s >= u`. Compiling with warning flags can help identify signed/unsigned comparison issues.

## 6. Narrowing Conversions
Narrowing occurs when a value cannot be represented safely in the destination type, such as converting `3.7` to an integer.

Brace initialisation, as in `int x{3.7};`, rejects this narrowing conversion at compile time. An explicit cast can be used when the conversion is intentional.

## 7. Improved Approach
The fixed program uses `static_cast` to make conversions visible and checks the signed value before converting it to unsigned. This improves clarity and avoids relying on unintended conversion behaviour.

## 8. Complexity Analysis
Both versions perform a fixed number of operations. Their time complexity is O(1), and their auxiliary space complexity is O(1).

## 9. Conclusion
This task demonstrates integer division, numeric conversion, character promotion, Boolean conversion, signed/unsigned comparison, and narrowing. Explicit conversions and appropriate checks make C++ programs easier to understand and safer to maintain.