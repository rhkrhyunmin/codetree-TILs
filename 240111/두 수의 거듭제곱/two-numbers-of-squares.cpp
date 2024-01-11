#include <iostream>

int main() {
    int a, b;

    std::cin >> a >> b;

    int result = 1;
    for (int i = 0; i < b; ++i) {
        result *= a;
    }

    std::cout << result << std::endl;

    return 0;
}