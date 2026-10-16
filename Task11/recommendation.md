# Task 11 – Configurable Fare System

## Aim
To store metro fare settings in an external configuration file and read them in C++.

## Implementation
The `fares.cfg` file stores the base fares for three zones, peak surcharge percentage and concession percentage. The C++ program reads these values using `ifstream`.

## Advantages
- Fare values can be changed without modifying the source code.
- The configuration file separates data from program logic.
- Invalid input and invalid fare settings are checked.

## Sample Test
Zone: 2  
Peak hour: Yes  
Concession: No

Expected output: `Final fare: 2400 paise`

## Recommendation
External configuration is suitable when fare values may change frequently. For a real system, the configuration should also be checked for missing values, invalid percentages and incorrect formats.

## Result
The program demonstrates how fare settings can be maintained separately from C++ source code.