#include <iostream>
using namespace std;

bool isPeak(int hour) {
    return (hour >= 8 && hour < 10) ||
           (hour >= 17 && hour < 20);
}

int main() {
    int hours[] = {7, 8, 9, 10, 16, 17, 19, 20};

    for (int hour : hours) {
        cout << hour << ":00 - "
             << (isPeak(hour) ? "Peak" : "Off-peak")
             << '\n';
    }

    return 0;
}