#include <iostream>
#include <iomanip>  // setprecision을 사용하기 위한 헤더 파일

int main() {
    int numbers[10];
    int sum = 0;
    int count = 0;

    // 10개의 정수 입력 받기
    for (int i = 0; i < 10; ++i) {
        std::cin >> numbers[i];

        // 0이 입력되면 입력 중단
        if (numbers[i] == 0) {
            break;
        }

        // 합과 개수 업데이트
        sum += numbers[i];
        count++;
    }

    // 0을 제외한 합과 평균 계산
    double average = (count > 0) ? static_cast<double>(sum) / count : 0.0;

    // 결과 출력
    std::cout <<  sum << " " << std::fixed << std::setprecision(1) << average << std::endl;

    return 0;
}