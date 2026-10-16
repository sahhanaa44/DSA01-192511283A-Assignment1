# Task 07 – Procedural and Object-Oriented Programming

## Aim
To implement and compare procedural and object-oriented approaches to metro fare calculation.

## Algorithm
1. Start the program.
2. Read the zone, peak-hour status and concession status.
3. Select the base fare for the zone.
4. Apply the peak surcharge if applicable.
5. Apply the concession if selected.
6. Display the final fare.
7. Stop.

## Procedural Programming
The procedural program uses a separate `calculateFare()` function to calculate the fare. The code is organized around functions and sequential instructions.

## Object-Oriented Programming
The OOP program defines a `MetroFare` class with a `calculate()` method. An object of the class performs the fare calculation.

## Sample Input
- Zone: 2 (Middle)
- Peak hour: Yes
- Concession: No

## Output
`Final fare: 2400 paise`

## Comparison
- Procedural programming organizes code using functions.
- OOP groups related operations into classes and objects.
- Both programs produce the same result for identical inputs.
- OOP can help organize and maintain larger programs.

## Complexity
- Time Complexity: O(1)
- Auxiliary Space Complexity: O(1)

## Result
The metro fare calculation was implemented using procedural and object-oriented programming, and both approaches produced the expected result.