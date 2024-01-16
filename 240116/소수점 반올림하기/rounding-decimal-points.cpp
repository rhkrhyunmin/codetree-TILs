#include <iostream>
#include <cmath> // round 함수를 사용하기 위한 헤더 파일

int main() {
    // 사용자로부터 입력 받기
    double a = 25.43;

    // 입력받은 값 반올림
    double rounded_a = round(a * 10) / 10;

    // 결과 출력
    std::cout << rounded_a << std::endl;

    return 0;
}