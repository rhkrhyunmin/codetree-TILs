#include <iostream>

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, m;

    std::cin >> n >> m;

    int gcd = calculateGCD(n, m);
    std::cout << gcd;

    return 0;
}