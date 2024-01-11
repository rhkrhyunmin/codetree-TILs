#include <iostream>


int calculate(int a) {
    int sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

void checkCondition(int n) {
    if (n % 2 == 0 && calculate(n) % 5 == 0) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
}

int main() {
    int n;

    std::cin >> n;

    checkCondition(n);

    return 0;
}