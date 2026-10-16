# Task 01 – Understand Problem and Identify Objects

## 1. Aim

To analyse the City Metro Smart-Card System, identify its objects and behaviours, and understand how object-oriented programming can be used to implement its fare logic.

## 2. Problem Analysis

The system manages metro smart cards, passengers, journeys and fare calculations. The fare depends on the travel zone and whether the journey occurs during peak hours.

| Zone | Base Fare |
|---|---:|
| Inner Zone | ₹10 |
| Middle Zone | ₹20 |
| Outer Zone | ₹30 |

A 20% surcharge applies during peak hours: 8:00–10:00 AM and 5:00–8:00 PM.

A journey is permitted only if the passenger has enough balance to pay the fare and retain at least ₹50 afterwards. Student and senior citizen concessions are also mentioned in the requirements, but their discount rates are not specified.

## 3. Objects and Their Responsibilities

| Object | Data | Behaviour |
|---|---|---|
| SmartCard | Card ID, balance | Check balance, deduct fare |
| Passenger | Name, passenger type | Identify passenger category |
| Journey | Source, destination, time | Validate journey |
| FareTable | Zone fares, surcharge | Calculate fare |
| MetroSystem | Cards, journeys | Manage the journey process |

## 4. Procedural Programming vs Object-Oriented Programming

**Procedural Programming:** The program uses functions to calculate fares, check balances and process journeys. Data and functions are managed separately.

**Object-Oriented Programming:** Data and related functions are grouped into objects such as `SmartCard`, `Passenger` and `Journey`.

OOP is suitable because each object has a clear responsibility, making the system easier to organise, maintain and extend.

## 5. Object-Oriented Programming Principles

- **Encapsulation:** Keeps card balance and fare-related operations together within the `SmartCard` class.
- **Abstraction:** Hides internal fare calculations and exposes simple operations such as `calculateFare()`.
- **Inheritance:** Allows specialised passenger types, such as `Student` and `SeniorCitizen`, to derive from a common `Passenger` class.
- **Polymorphism:** Allows different passenger types to apply their own concession calculation through a common interface.

## 6. Journey Validation Rules

1. Identify the destination zone and base fare.
2. Check whether peak-hour surcharge applies.
3. Calculate the applicable fare and concession, once the concession rules are defined.
4. Check whether the card balance after payment will be at least ₹50.
5. Allow the journey and deduct the fare only if the balance condition is satisfied.

## 7. Procedural Alternative and Complexity

The same system can be implemented using separate functions and structures without creating classes. Functions could handle fare calculation, balance checking and fare deduction.

For a single journey, fare calculation and balance validation take **O(1)** time because they involve a fixed number of operations.

For one smart card, storing its details requires **O(1)** space. For `n` smart cards, the total storage is **O(n)**.

## 8. Effect of Changing Requirements

In a procedural program, adding a new passenger category may require changes to several functions and conditional statements.

In an OOP design, a new passenger type can be introduced through inheritance and polymorphism, reducing changes to existing code when the design supports extension.

## 9. Result

The main objects and their responsibilities were identified. OOP principles were related to the metro smart-card system, and the journey validation rules and basic complexity were analysed.