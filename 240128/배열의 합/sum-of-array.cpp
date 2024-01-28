#include <iostream>

int main() {
    // 4x4 크기의 배열을 선언합니다.
    int arr[4][4];

    // 배열에 각 원소를 입력받습니다.
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cin >> arr[i][j];
        }
    }

    // 각 줄의 합을 계산하고 출력합니다.
    for (int i = 0; i < 4; ++i) {
        int lineSum = 0;  // 현재 줄의 합을 저장하는 변수
        for (int j = 0; j < 4; ++j) {
            lineSum += arr[i][j];
        }
        std::cout << lineSum << std::endl;
    }

    return 0;
}