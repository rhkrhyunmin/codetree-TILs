#include <iostream>
#include <iomanip> // 소수점 자릿수를 조절하기 위한 헤더 파일

int main() {
    // 추의 무게와 달에서 중력의 비율을 상수로 정의
    double weight = 13; // 추의 무게 (예시 값)
    double gravity_ratio = 0.165; // 달에서 중력의 비율 (예시 값)

    // 달에서 중력의 비율을 곱한 결과 계산
    double result = weight * gravity_ratio;

    // 결과 출력 (소수점 여섯째 자리까지)
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "13 * 0.165000 = " <<  result << std::endl;

    return 0;
}