#include <iostream>

int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int n, m;

    std::cin >> n >> m;

    int lcm = calculateLCM(n, m);
    std::cout << lcm;

    return 0;
}