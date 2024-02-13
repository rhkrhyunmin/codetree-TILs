#include <iostream>

int calculateMinutes(int a, int b, int c, int d) {
    int minutesStart = a * 60 + b;
    int minutesEnd = c * 60 + d;
    return minutesEnd - minutesStart;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int minutes = calculateMinutes(a, b, c, d);
    std::cout << minutes << std::endl;

    return 0;
}