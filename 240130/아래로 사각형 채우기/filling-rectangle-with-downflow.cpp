#include <iostream>

int main() {
    int n;

    // 사용자로부터 n 입력
    std::cin >> n;

    // 정사각형 생성 및 출력
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n * n; j += n) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}