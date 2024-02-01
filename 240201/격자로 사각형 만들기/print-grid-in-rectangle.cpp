#include <iostream>
#include <vector>

int main() {
    // 격자의 크기 입력
    int n;
    std::cin >> n;

    // n x n 크기의 격자 생성 및 초기화
    std::vector<std::vector<int>> grid(n, std::vector<int>(n, 0));

    // 첫 번째 행과 첫 번째 열 초기화
    for (int i = 0; i < n; ++i) {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }

    // 나머지 칸들은 바로 위, 왼쪽, 왼쪽 위의 값의 합으로 초기화
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            grid[i][j] = grid[i - 1][j] + grid[i][j - 1] + grid[i - 1][j - 1];
        }
    }

    // 격자 출력
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}