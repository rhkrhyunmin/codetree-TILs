#include <iostream>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}