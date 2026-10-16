#include <iostream>
using namespace std;

int main() {
    long long baseFare = 1000;
    int surcharge = 20;

    long long correct = baseFare + baseFare * surcharge / 100;
    long long wrong = (baseFare + baseFare) * surcharge / 100;

    cout << "Base fare: " << baseFare << " paise\n";
    cout << "Fare with 20% surcharge: " << correct << " paise\n";
    cout << "Incorrect expression result: " << wrong << " paise\n";

    return 0;
}