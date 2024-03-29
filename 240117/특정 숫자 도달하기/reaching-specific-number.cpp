#include <iostream>
#include <iomanip>  // std::setprecision을 사용하기 위한 헤더

int main() {
    // 10개의 정수를 저장할 배열
    int numbers[10];

    // 10개의 정수 입력 받기
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];

        // 250 이상의 정수가 입력되면 마지막으로 입력된 수를 제외하고 반복문 종료
        if (numbers[i] >= 250) {
            i--;  // 마지막으로 입력된 수를 제외하고 다시 입력 받기 위해 인덱스 조정
            break;
        }
    }

    // 합계 및 평균 계산
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += numbers[i];
    }
    double average = static_cast<double>(sum) / 10.0;

    // 출력 형식에 따라 결과 출력
    std::cout << sum << " " << std::fixed << std::setprecision(1) << average << std::endl;

    return 0;
}