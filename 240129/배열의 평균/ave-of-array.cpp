#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 2행 4열의 배열 입력 받기
    int array[2][4];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cin >> array[i][j];
        }
    }

    // 가로 평균 계산
    for (int i = 0; i < 2; ++i) {
        double rowSum = 0;
        for (int j = 0; j < 4; ++j) {
            rowSum += array[i][j];
        }
        double rowAverage = rowSum / 4.0;
        std::cout  << std::fixed << std::setprecision(1) << rowAverage << " ";
    }
    cout << endl;

    // 세로 평균 계산
    for (int j = 0; j < 4; ++j) {
        double colSum = 0;
        for (int i = 0; i < 2; ++i) {
            colSum += array[i][j];
        }
        double colAverage = colSum / 2.0;
        std::cout  << std::fixed << std::setprecision(1) << colAverage << " ";
    }
    cout << endl;

    // 전체 평균 계산
    double totalSum = 0;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 4; ++j) {
            totalSum += array[i][j];
        }
    }
    double totalAverage = totalSum / 8.0;
    std::cout  << std::fixed << std::setprecision(1) << totalAverage << " ";
    cout << endl;

    return 0;
}