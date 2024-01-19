#include <iostream>

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int count = 0;

    // 최대 100개의 정수 입력받기
    while (true) {
        int num;
        std::cin >> num;

        // 입력된 정수가 0이면 루프 종료
        if (num == 0) {
            break;
        }

        // 배열에 정수 저장
        arr[count % 3] = num;
        count++;
    }

    // 0 이후 마지막으로 주어진 3개의 정수의 합 출력
    int sum = 0;
    for (int i = 0; i < std::min(count, 3); ++i) {
        sum += arr[i];
    }

    std::cout << sum << std::endl;

    return 0;
}