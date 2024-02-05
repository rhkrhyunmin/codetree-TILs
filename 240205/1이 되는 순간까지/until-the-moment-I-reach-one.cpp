#include <iostream>

int divideAndCount(int n, int count) {
    if (n == 1) {
        return count;
    }

    if (n % 2 == 0) {
        return divideAndCount(n / 2, count + 1);
    } else {
        return divideAndCount(3 * n + 1, count + 1);
    }
}

int main() {
    int N;
    std::cin >> N;

    int result = divideAndCount(N, 0);

    std::cout << result + 1 << std::endl;  // Add 1 to include the final division when n becomes 1

    return 0;
}