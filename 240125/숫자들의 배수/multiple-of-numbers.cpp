#include <iostream>

int main() {
    int num;
    int multiples[10]; // 입력받은 정수의 배수를 저장할 배열

    // 정수 입력 받기
    std::cin >> num;

    // 입력받은 정수의 배수를 계산하고 배열에 저장
    for (int i = 0; i < 10; ++i) {
        multiples[i] = num * (i + 1);
    }

    // 5의 배수가 2번 출력될 때까지 배열 출력
    int count = 0;
    for (int i = 0; i < 10; ++i) {
        std::cout << multiples[i] << " ";

        // 5의 배수가 2번 출력되면 종료
        if (multiples[i] % 5 == 0) {
            count++;
            if (count == 2) {
                std::cout << std::endl;
                break;
            }
        }
    }

    return 0;
}