#include <iostream>

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int N;
    std::cin >> N;

    int result = fibonacci(N);

    std::cout << result << std::endl;

    return 0;
}