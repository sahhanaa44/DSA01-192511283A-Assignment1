#include <iostream>
#include "../Task02/constants.hpp"
using namespace std;

int main() {
    int zone, peak, concession;
    long long fare = 0;

    cout << "1. Inner  2. Middle  3. Outer\n";
    cout << "Enter zone: ";
    cin >> zone;

    cout << "Peak hour? (1-Yes, 0-No): ";
    cin >> peak;

    cout << "Concession? (1-Yes, 0-No): ";
    cin >> concession;

    switch (zone) {
        case 1: fare = BASE_PAISE[0]; break;
        case 2: fare = BASE_PAISE[1]; break;
        case 3: fare = BASE_PAISE[2]; break;
        default:
            cout << "Invalid zone\n";
            return 1;
    }

    if (peak)
        fare += fare * PEAK_SURCHARGE_PERCENT / 100;

    if (concession)
        fare -= fare * CONCESSION_PERCENT / 100;

    cout << "Final fare: " << fare << " paise\n";
    return 0;
}