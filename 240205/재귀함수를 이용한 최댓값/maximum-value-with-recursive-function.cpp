#include <iostream>
#include <climits>  // INT_MIN 상수를 사용하기 위한 헤더

int findMax(int arr[], int n, int currentMax) {
    // 기저 조건: 모든 원소를 확인했을 때 현재 최대값 반환
    if (n == 0) {
        return currentMax;
    }

    // 현재 원소와 현재 최대값 중 큰 값을 선택
    int newMax = std::max(currentMax, arr[n - 1]);

    // 남은 원소에 대해 재귀 호출
    return findMax(arr, n - 1, newMax);
}

int main() {
    int n;
    std::cin >> n;

    int arr[n];

    // n개의 정수 입력 받기
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // 초기 최대값을 INT_MIN으로 설정
    int initialMax = INT_MIN;

    // 재귀 함수 호출
    int result = findMax(arr, n, initialMax);

    std::cout << result << std::endl;

    return 0;
}