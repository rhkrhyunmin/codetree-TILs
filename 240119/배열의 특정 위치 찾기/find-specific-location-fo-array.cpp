#include <iostream>
#include <iomanip>

int main() {
    const int size = 10;
    int arr[size];

    // 10개의 정수 입력받기
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int evenSum = 0;
    int multipleOf3Count = 0;
    int multipleOf3Sum = 0;

    // 짝수 번째 값의 합과 3의 배수 번째 값의 합 구하기
    for (int i = 1; i <= size; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i - 1];
        }
        if (i % 3 == 0) {
            multipleOf3Count++;
            multipleOf3Sum += arr[i - 1];
        }
    }

    // 평균 계산 (반올림하여 소수점 첫째자리까지 출력)
    double average = (multipleOf3Count > 0) ? static_cast<double>(multipleOf3Sum) / multipleOf3Count : 0.0;

    // 결과 출력
    std::cout << evenSum << " " << std::fixed << std::setprecision(1) << average << std::endl;

    return 0;
}