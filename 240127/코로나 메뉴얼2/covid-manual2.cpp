#include <iostream>

int main() {
    char symptom1, symptom2, symptom3;
    double temperature1, temperature2, temperature3;

    // 환자 1 정보 입력
    std::cin >> symptom1 >> temperature1;
    // 환자 2 정보 입력
    std::cin >> symptom2 >> temperature2;
    // 환자 3 정보 입력
    std::cin >> symptom3 >> temperature3;

    // 진료소 인원 초기화
    int countA = 0, countB = 0, countC = 0, countD = 0;

    // A, B, C, D 진료소 인원 계산
    if (symptom1 == 'Y' && temperature1 >= 37) {
        countA++;
    } else if (symptom1 == 'N' && temperature1 >= 37) {
        countB++;
    } else if (symptom1 == 'Y' && temperature1 < 37) {
        countC++;
    } else {
        countD++;
    }

    if (symptom2 == 'Y' && temperature2 >= 37) {
        countA++;
    } else if (symptom2 == 'N' && temperature2 >= 37) {
        countB++;
    } else if (symptom2 == 'Y' && temperature2 < 37) {
        countC++;
    } else {
        countD++;
    }

    if (symptom3 == 'Y' && temperature3 >= 37) {
        countA++;
    } else if (symptom3 == 'N' && temperature3 >= 37) {
        countB++;
    } else if (symptom3 == 'Y' && temperature3 < 37) {
        countC++;
    } else {
        countD++;
    }

    // 위급상황 여부 확인 및 출력
    if (countA >= 2) {
        std::cout << countA << " " << countB << " " << countC << " " << countD << " E" << std::endl;
    } else {
        std::cout << countA << " " << countB << " " << countC << " " << countD << std::endl;
    }

    return 0;
}