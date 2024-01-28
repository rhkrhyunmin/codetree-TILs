#include <iostream>

int main() {
    // 정수 n과 m을 입력받습니다.
    int n, m;
    std::cin >> n >> m;

    // 배열 arr을 선언하고 n개의 정수를 입력받습니다.
    int arr[100];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // m이 등장하는 횟수를 세는 변수 count를 초기화합니다.
    int count = 0;

    // 배열을 순회하면서 m이 등장하는 횟수를 세어 count에 더합니다.
    for (int i = 0; i < n; ++i) {
        if (arr[i] == m) {
            count++;
        }
    }

    // 결과를 출력합니다.
    std::cout << count << std::endl;

    return 0;
}