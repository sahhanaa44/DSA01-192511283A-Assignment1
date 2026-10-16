# Task 09 – Testing and Validation of Metro Fare Calculation

## Aim
To test and validate the metro fare calculation program using different test cases.

## Procedure
1. Define the fare calculation function.
2. Provide test inputs for different zones.
3. Calculate the fare based on peak-hour and concession conditions.
4. Compare the actual fare with the expected fare.
5. Display PASS if both values match; otherwise, display FAIL.

## Test Cases

| Test Case | Input | Expected Output |
|---|---|---|
| Inner off-peak | Zone 1, no peak, no concession | 1000 paise |
| Middle off-peak | Zone 2, no peak, no concession | 2000 paise |
| Outer peak | Zone 3, peak, no concession | 3600 paise |
| Middle concession | Zone 2, no peak, concession | 1000 paise |
| Invalid zone | Zone 4 | Invalid (-1) |

## Validation
The program compares the calculated fare with the expected fare for each test case. Matching results are marked PASS, while mismatches are marked FAIL.

## Complexity Analysis
- **Time Complexity:** O(1) per test case because each calculation uses a fixed number of operations.
- **Auxiliary Space Complexity:** O(1) because no additional data structures are required.

## Result
The fare calculation program was tested with normal fares, peak-hour surcharges, concessions and invalid zone inputs. The test results indicate whether the fare logic behaves as expected.