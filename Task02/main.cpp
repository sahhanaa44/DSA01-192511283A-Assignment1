
#include <iostream>
#include "constants.hpp"
using namespace std;

int main() {
    int zoneNumber = 1;
    long long fare = BASE_PAISE[zoneNumber - 1];

    cout << "Metro Smart-Card System\n";
    cout << "Zone: Inner\n";
    cout << "Base fare: " << fare << " paise\n";
    cout << "Peak surcharge: " << PEAK_SURCHARGE_PERCENT << "%\n";
    cout << "Minimum balance: " << MIN_BALANCE_PAISE << " paise\n";

    return 0;
}
