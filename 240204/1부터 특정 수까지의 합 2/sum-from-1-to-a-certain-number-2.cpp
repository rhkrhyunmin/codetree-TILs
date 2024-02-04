#include <iostream>

int sumUpToN(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumUpToN(n - 1);
    }
}

int main() {
    int N;

    std::cin >> N;

    // 1부터 N까지의 합 계산 및 출력
    int result = sumUpToN(N);
    std::cout << result << std::endl;

    return 0;
}