#include <iostream>

int main() {
    const int n = 10;
    int numbers[n];

    // 10개의 정수 입력 받기
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // 홀수 번째와 짝수 번째 정수의 합 계산
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // 짝수 번째
            evenSum += numbers[i];
        } else {
            // 홀수 번째
            oddSum += numbers[i];
        }
    }

    // 더 큰 값에서 작은 값 뺀 결과 출력
    int result = (oddSum > evenSum) ? (oddSum - evenSum) : (evenSum - oddSum);
    std::cout << result << std::endl;

    return 0;
}