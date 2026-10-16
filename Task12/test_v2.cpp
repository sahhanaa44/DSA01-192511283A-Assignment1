
#include <iostream>
using namespace std;

long long calculateFare(int zone, bool peak, bool weekend,
                        bool concession) {
    long long fares[] = {1000, 2000, 3000, 6000};

    if (zone < 1 || zone > 4)
        return -1;

    long long fare = fares[zone - 1];

    if (peak)
        fare += fare * 20 / 100;
    else if (weekend)
        fare -= fare * 10 / 100;

    if (concession)
        fare -= fare * 50 / 100;

    return fare;
}

void test(const char* name, int zone, bool peak, bool weekend,
          bool concession, long long expected) {
    long long actual = calculateFare(zone, peak, weekend, concession);

    cout << name << ": "
         << (actual == expected ? "PASS" : "FAIL")
         << " (Expected " << expected
         << ", Got " << actual << ")\n";
}

int main() {
    test("Inner normal", 1, false, false, false, 1000);
    test("Airport normal", 4, false, false, false, 6000);
    test("Airport peak", 4, true, false, false, 7200);
    test("Middle weekend", 2, false, true, false, 1800);
    test("Peak overrides weekend", 2, true, true, false, 2400);
    test("Invalid zone", 5, false, false, false, -1);

    return 0;
}
