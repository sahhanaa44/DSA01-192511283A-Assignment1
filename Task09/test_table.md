# Task 09 – Fare Calculation Test Cases

## Aim
To validate the metro fare calculation program using different test cases.

## Test Table

| Test Case | Zone | Peak | Concession | Expected Fare |
|---|---|---|---|---:|
| Inner off-peak | 1 | No | No | 1000 paise |
| Middle off-peak | 2 | No | No | 2000 paise |
| Outer peak | 3 | Yes | No | 3600 paise |
| Middle concession | 2 | No | Yes | 1000 paise |
| Invalid zone | 4 | No | No | Invalid (-1) |

## Testing Method
The program calculates the fare for each test case and compares the actual value with the expected value. A matching result is marked PASS; otherwise, it is marked FAIL.

## Result
The test cases verify normal fares, peak surcharges, concessions and invalid-zone handling.