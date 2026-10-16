
#include <iostream>
using namespace std;

long long calculateFare(int zone, bool peak, bool weekend,
                        bool concession) {
    long long fares[] = {1000, 2000, 3000, 6000};

    if (zone < 1 || zone > 4)
        return -1;

    long long fare = fares[zone - 1];

    if (peak) {
        fare += fare * 20 / 100;
    } else if (weekend) {
        fare -= fare * 10 / 100;
    }

    if (concession)
        fare -= fare * 50 / 100;

    return fare;
}

int main() {
    int zone, peak, weekend, concession, pass;

    cout << "1.Inner 2.Middle 3.Outer 4.Airport\n";
    cout << "Enter zone: ";
    cin >> zone;

    cout << "Peak hour? (1/0): ";
    cin >> peak;

    cout << "Weekend? (1/0): ";
    cin >> weekend;

    cout << "Concession? (1/0): ";
    cin >> concession;

    cout << "Monthly pass valid for this zone? (1/0): ";
    cin >> pass;

    if (peak < 0 || peak > 1 || weekend < 0 || weekend > 1 ||
        concession < 0 || concession > 1 || pass < 0 || pass > 1) {
        cout << "Invalid input\n";
        return 1;
    }

    if (pass) {
        if (zone < 1 || zone > 4) {
            cout << "Invalid zone\n";
            return 1;
        }
        cout << "Fare: 0 paise (monthly pass)\n";
        return 0;
    }

    long long fare = calculateFare(zone, peak, weekend, concession);

    if (fare < 0)
        cout << "Invalid zone\n";
    else
        cout << "Final fare: " << fare << " paise\n";

    return 0;
}
