#include <iostream>

// 재귀 함수를 사용하여 각 자리 숫자들의 합을 구하는 함수
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

int main() {
    int num1, num2, num3;
    std::cin >> num1 >> num2 >> num3;

    int result = num1 * num2 * num3;

    // 결과값의 각 자리 숫자들의 합을 계산
    int sum = sumOfDigits(result);

    std::cout << sum << std::endl;

    return 0;
}