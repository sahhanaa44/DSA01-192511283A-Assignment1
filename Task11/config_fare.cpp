
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("Task11/fares.cfg");

    long long fares[3];
    int peakRate, concessionRate;

    if (!file) {
        cout << "Cannot open fares.cfg\n";
        return 1;
    }

    for (int i = 0; i < 3; i++)
        file >> fares[i];

    file >> peakRate >> concessionRate;
    file.close();

    int zone, peak, concession;

    cout << "Enter zone (1-3): ";
    cin >> zone;

    cout << "Peak hour? (1-Yes, 0-No): ";
    cin >> peak;

    cout << "Concession? (1-Yes, 0-No): ";
    cin >> concession;

    if (zone < 1 || zone > 3 ||
        peak < 0 || peak > 1 ||
        concession < 0 || concession > 1 ||
        peakRate < 0 || peakRate > 100 ||
        concessionRate < 0 || concessionRate > 100) {
        cout << "Invalid input or configuration\n";
        return 1;
    }

    long long fare = fares[zone - 1];

    if (fare < 0 || fares[0] < 0 ||
        fares[1] < 0 || fares[2] < 0) {
        cout << "Invalid fare configuration\n";
        return 1;
    }

    if (peak)
        fare += fare * peakRate / 100;

    if (concession)
        fare -= fare * concessionRate / 100;

    cout << "Final fare: " << fare << " paise\n";
    return 0;
}
