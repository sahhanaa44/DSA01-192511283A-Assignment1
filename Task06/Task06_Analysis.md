# Task 06 – Fare Calculation Using Switch and Table

## Aim
To implement and compare two methods of calculating metro fares.

## Method 1: Switch Statement
The `switch` statement selects the base fare according to the zone entered by the user. It is easy to understand when there are a small number of fixed choices.

## Method 2: Fare Table
The fare table stores the base fares in an array. The zone number is used as an index to retrieve the corresponding fare. This makes it easier to update or extend the fare values.

## Fare Calculation
The program adds a 20% surcharge during peak hours. If concession is selected, it reduces the resulting fare by 50%, based on the project's stated assumption.

## Validation
The program checks whether the entered zone is between 1 and 3. Invalid zone values display an error message.

## Complexity
- Time: O(1), because the program performs a fixed number of operations.
- Space: O(1) additional space.

## Result
Both the switch-based and table-based approaches calculate the fare for the selected zone, peak-hour status and concession status.