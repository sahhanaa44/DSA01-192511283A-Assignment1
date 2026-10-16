# Task 10 – Fare Totals and Compiler Warnings

## Aim
To calculate the total fare collected from multiple passengers and examine compiler warnings in C++.

## Algorithm
1. Start the program.
2. Read the number of passengers.
3. Validate the passenger count.
4. Read each passenger's fare in paise.
5. Validate each fare and add it to the total.
6. Display the total in paise and rupees.
7. Stop the program.

## Implementation
The program uses a `for` loop to read and add passenger fares. The `long long` data type stores the total, while integer paise avoids floating-point precision issues in money calculations.

Compiler flags such as `-Wall`, `-Wextra`, `-Wconversion` and `-pedantic` are used to identify potential coding issues.

## Sample Input
Number of passengers: 3

Passenger fares: 1000, 2400, 3000 paise

## Output
Total collected: 6400 paise

Total collected: 64 rupees and 0 paise

## Compiler Warnings
The program is compiled with warning flags to check for potential issues. The actual compiler output is recorded in `warnings.txt`. If no warnings are reported, the file should state that no warnings were reported during compilation.

## Complexity Analysis
- **Time Complexity:** O(n), where n is the number of passengers.
- **Auxiliary Space Complexity:** O(1), because the program uses a fixed number of variables.

## Result
The program successfully calculates the total fare collected from multiple passengers and demonstrates the use of compiler warning flags for code validation.