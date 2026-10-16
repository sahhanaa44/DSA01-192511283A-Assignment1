
#include <iostream>
#include <climits>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes\n";
    cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    cout << "Maximum int: " << INT_MAX << endl;
    cout << "Maximum long long: " << LLONG_MAX << endl;

    double sum = 0;
    for (int i = 0; i < 10; i++)
        sum += 0.1;

    cout << "Sum of 0.1 ten times: " << sum << endl;
    cout << "Fare in paise: " << 30 * 100 << endl;

    return 0;
}
