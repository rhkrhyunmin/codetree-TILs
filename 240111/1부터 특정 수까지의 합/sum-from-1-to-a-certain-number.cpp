#include <iostream>

int main() {
    int N;

    std::cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    std::cout  << sum / 10 << std::endl;

    return 0;
}