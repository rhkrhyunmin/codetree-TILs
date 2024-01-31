#include <iostream>

int main() {
    const int size = 5;
    int array[size][size];

    // 배열 초기화
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (i == 0 || j == 0) {
                // 첫 번째 행과 첫 번째 열은 모두 1로 초기화
                array[i][j] = 1;
            } else {
                // 나머지 칸들은 바로 위의 값과 바로 왼쪽의 값을 더함
                array[i][j] = array[i - 1][j] + array[i][j - 1];
            }
        }
    }

    // 배열 출력
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}