
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int zone;

    cout << "Enter passenger full name: ";
    getline(cin, name);

    cout << "Enter zone (1-Inner, 2-Middle, 3-Outer): ";
    cin >> zone;

    if (zone < 1 || zone > 3) {
        cout << "Invalid zone\n";
        return 1;
    }

    cout << "Passenger: " << name << '\n';
    cout << "Zone: " << zone << '\n';

    return 0;
}
