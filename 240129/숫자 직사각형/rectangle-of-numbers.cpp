#include <iostream>

int main() {
    int n, m;
    std::cin >> n;
    std::cin >> m;

    // 2차원 배열을 이용하여 직사각형 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << (i * m + j + 1) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}