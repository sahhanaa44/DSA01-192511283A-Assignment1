
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

void test(string name, int zone, bool peak,
          bool concession, long long expected) {
    long long actual = calculateFare(zone, peak, concession);

    cout << name << ": "
         << (actual == expected ? "PASS" : "FAIL")
         << " (Expected " << expected
         << ", Got " << actual << ")\n";
}

int main() {
    test("Inner off-peak", 1, false, false, 1000);
    test("Middle off-peak", 2, false, false, 2000);
    test("Outer peak", 3, true, false, 3600);
    test("Middle concession", 2, false, true, 1000);
    test("Invalid zone", 4, false, false, -1);

    return 0;
}
