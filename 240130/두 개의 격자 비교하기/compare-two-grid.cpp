#include <iostream>
#include <vector>

int main() {
    int n, m;

    // 격자의 크기 입력

    std::cin >> n >> m;

    if (n < 1 || n > 10 || m < 1 || m > 10) {

        return 1;  // 오류 코드 반환
    }

    // 첫 번째 격자 입력
    std::vector<std::vector<int>> grid1(n, std::vector<int>(m, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> grid1[i][j];
        }
    }

    // 두 번째 격자 입력
    std::vector<std::vector<int>> grid2(n, std::vector<int>(m, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> grid2[i][j];
        }
    }

    // 새로운 격자 생성 및 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid1[i][j] == grid2[i][j]) {
                std::cout << "0 ";
            } else {
                std::cout << "1 ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}