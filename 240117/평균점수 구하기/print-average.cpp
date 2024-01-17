#include <iostream>
#include <iomanip> // 소수점 자리 조절을 위해 필요한 헤더 파일

int main() {
    // 8명의 학생들의 점수를 저장할 배열
    double scores[8];

    // 8명의 학생들의 점수를 입력받음
    for (int i = 0; i < 8; ++i) {
        std::cin >> scores[i];
    }

    // 평균을 계산
    double sum = 0.0;
    for (int i = 0; i < 8; ++i) {
        sum += scores[i];
    }
    double average = sum / 8.0;

    // 소수 첫째 자리까지 출력
    std::cout << std::fixed << std::setprecision(1);
    std::cout << average << std::endl;

    return 0;
}