#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int numbers[MAX_SIZE];


    // 입력을 받으면서 배열에 저장
    int input;
    int count = 0;
    while (count < MAX_SIZE) {
        std::cin >> input;

        if (input == 0)
            break;

        numbers[count++] = input;
    }

    // 주어진 규칙에 따라 정수를 출력
    for (int i = 0; i < count; ++i) {
        // 홀수인 경우 3을 더하고 출력, 짝수인 경우 2로 나눈 몫을 출력
        if (numbers[i] % 2 == 1)
            std::cout << numbers[i] + 3 << " ";
        else
            std::cout << numbers[i] / 2 << " ";
    }

    return 0;
}