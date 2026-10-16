
#include <iostream>

int main()
{
    int a = 7, b = 2;

    double c = static_cast<double>(a / b);
    double d = static_cast<double>(a) / b;
    std::cout << c << ' ' << d << '\n';

    char ch = static_cast<char>('A' + 2);
    std::cout << ch << ' '
              << static_cast<int>(ch) + 1 << '\n';

    bool flag = (5 != 0);
    std::cout << flag << ' '
              << std::boolalpha << flag << '\n';

    unsigned int u = 1;
    int s = -1;

    if (s < 0 || static_cast<unsigned int>(s) < u)
        std::cout << "s < u\n";
    else
        std::cout << "s >= u\n";
}
