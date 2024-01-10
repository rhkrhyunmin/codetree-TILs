#include <iostream>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    int min_value = a;
    if (b < min_value) {
        min_value = b;
    }
    if (c < min_value) {
        min_value = c;
    }

    std::cout << min_value;

    return 0;
}