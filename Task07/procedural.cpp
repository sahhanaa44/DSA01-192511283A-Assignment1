#include <iostream>
using namespace std;

long long calculateFare(int zone, bool peak, bool concession) {
    long long fare;

    switch (zone) {
        case 1: fare = 1000; break;
        case 2: fare = 2000; break;
        case 3: fare = 3000; break;
        default: return -1;
    }

    if (peak)
        fare += fare * 20 / 100;

    if (concession)
        fare -= fare * 50 / 100;

    return fare;
}

int main() {
    int zone, peak, concession;

    cout << "Enter zone (1-Inner, 2-Middle, 3-Outer): ";
    cin >> zone;
    cout << "Peak hour? (1-Yes, 0-No): ";
    cin >> peak;
    cout << "Concession? (1-Yes, 0-No): ";
    cin >> concession;

    long long fare = calculateFare(zone, peak, concession);

    if (fare < 0)
        cout << "Invalid zone\n";
    else
        cout << "Final fare: " << fare << " paise\n";

    return 0;
}
