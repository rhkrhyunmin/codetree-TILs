#include <iostream>

int main() {
    // 정수 n 입력 받기
    int n;
    std::cin >> n;

    // 별표 출력
    for (int i = 0; i < n; ++i) {
        // 공백 출력
        for (int j = 0; j < i; ++j) {
            std::cout << "  ";
        }

        // 별표 출력
        for (int k = 0; k < 2 * (n - i) - 1; ++k) {
            std::cout << "*";
            if (k < 2 * (n - i) - 2) {
                std::cout << " ";
            }
        }

        // 줄 바꿈
        std::cout << std::endl;
    }

    return 0;
}