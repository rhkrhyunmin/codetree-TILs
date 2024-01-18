#include <iostream>

int main() {
    const int size = 10;
    int numbers[size];

    // 10개의 정수 입력 받기
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }

    // 2의 배수의 개수와 합계 계산
    int countOfMultiplesOfTwo = 0;
    int sumOfMultiplesOfTwo = 0;

    for (int i = 0; i < size; ++i) {
        if (numbers[i] == 0) {
            break; 
        }

        if (numbers[i] % 2 == 0) {
            countOfMultiplesOfTwo++;
            sumOfMultiplesOfTwo += numbers[i];
        }
    }

    // 결과 출력
    std::cout << countOfMultiplesOfTwo << " " << sumOfMultiplesOfTwo << std::endl;

    return 0;
}