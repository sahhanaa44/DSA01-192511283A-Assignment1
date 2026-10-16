
#include <iostream>
using namespace std;

int main() {
    int n;
    long long fare, total = 0;

    cout << "Enter number of passengers: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of passengers\n";
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << "Enter fare for passenger " << i
             << " in paise: ";
        cin >> fare;

        if (fare < 0) {
            cout << "Invalid fare\n";
            return 1;
        }

        total += fare;
    }

    cout << "Total collected: " << total << " paise\n";
    cout << "Total collected: " << total / 100
         << " rupees and " << total % 100 << " paise\n";

    return 0;
}
