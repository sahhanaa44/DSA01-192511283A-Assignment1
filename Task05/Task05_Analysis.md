# Task 05 – Operator Precedence and Peak-Hour Fare Calculation

## Aim
To understand operator precedence and implement peak-hour checking for the metro fare system.

## Operator Precedence
Multiplication and division are evaluated before addition. Parentheses can change the evaluation order. The correct 20% surcharge calculation is:

`baseFare + baseFare * surcharge / 100`

For a base fare of 1000 paise, the final amount is 1200 paise.

## Peak-Hour Logic
The morning peak interval is from 8:00 to before 10:00. The evening peak interval is from 17:00 to before 20:00. The start times are included, but the end times are excluded.

## Boundary Testing
The program tests hours immediately around the peak intervals, including 7, 8, 9, 10, 17, 19 and 20.

## Complexity
- Time: O(n) for checking n hours.
- Space: O(1) additional space for each peak-hour check.

## Result
Operator precedence was demonstrated, and peak-hour boundaries were tested successfully.