#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int sumOfPrimesInRange(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int a, b;

    std::cin >> a >> b;

    int result = sumOfPrimesInRange(a, b);

    std::cout << result << std::endl;

    return 0;
}