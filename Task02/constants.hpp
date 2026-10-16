
#pragma once

enum class Zone {
    Inner,
    Middle,
    Outer
};

constexpr int ZONE_COUNT = 3;
constexpr long long BASE_PAISE[ZONE_COUNT] = {1000, 2000, 3000};
constexpr int PEAK_SURCHARGE_PERCENT = 20;
constexpr int CONCESSION_PERCENT = 50;
constexpr long long MIN_BALANCE_PAISE = 5000;

constexpr int PEAK_AM_START = 8;
constexpr int PEAK_AM_END = 10;
constexpr int PEAK_PM_START = 17;
constexpr int PEAK_PM_END = 20;
