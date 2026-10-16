# Task 12 – Impact Analysis of Metro Fare System Version 2

## Aim
To extend the metro fare system with new fare rules and evaluate their impact.

## New Features
1. An Airport zone with a base fare of 6000 paise.
2. A 10% weekend discount.
3. A rule that prevents the weekend discount and peak surcharge from being applied together.
4. Monthly passes that allow zero-fare trips within their selected zones.

## Changes to the Existing System
The original three-zone fare calculation is extended to four zones. The fare calculation now checks whether the trip occurs during peak hours or on a weekend. If peak hour applies, the 20% surcharge is used; otherwise, the 10% weekend discount may apply.

The monthly-pass feature is represented by a user-provided validity input. A complete implementation would need to store the two selected zones and verify pass validity for each journey.

## Testing
The updated fare logic is tested using normal fares, Airport fares, peak surcharges, weekend discounts and invalid zone values.

## Impact
- The Airport zone supports a higher base fare for airport journeys.
- The weekend discount provides a reduced fare outside peak hours.
- The non-combination rule avoids applying the peak surcharge and weekend discount together.
- Monthly passes can reduce repeated fare payments for eligible journeys.
- Additional rules increase the need for testing and validation.

## Limitations
The program does not store passenger accounts, pass expiry dates, or the two zones selected for a monthly pass. These would be required in a complete metro reservation system.

## Complexity Analysis
- Time Complexity: O(1) per fare calculation.
- Auxiliary Space Complexity: O(1).

## Result
The updated program demonstrates the additional Airport, weekend and monthly-pass fare rules and tests the fare calculations against expected values.