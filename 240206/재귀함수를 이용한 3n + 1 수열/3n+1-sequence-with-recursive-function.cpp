#include <iostream>

// 재귀 함수를 사용하여 반복 횟수를 계산하는 함수
int calculateIterations(int n, int count) {
    // 기저 조건: n이 1이면 반복 종료
    if (n == 1) {
        return count;
    }

    // n이 짝수인 경우
    if (n % 2 == 0) {
        return calculateIterations(n / 2, count + 1);
    }
    // n이 홀수인 경우
    else {
        return calculateIterations(3 * n + 1, count + 1);
    }
}

int main() {
    int n;
    std::cin >> n;

    // 초기 반복 횟수는 0으로 시작
    int result = calculateIterations(n, 0);

    std::cout  << result << std::endl;

    return 0;
}