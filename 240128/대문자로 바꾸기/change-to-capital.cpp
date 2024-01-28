#include <iostream>
#include <cctype> // toupper 함수를 사용하기 위한 헤더

int main() {
    // 5x3 크기의 배열을 선언합니다.
    char arr[5][3];

    // 배열에 각 문자를 입력받습니다.
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> arr[i][j];
        }
    }

    // 각 문자를 대문자로 바꾸어 출력합니다.
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            // toupper 함수를 사용하여 대문자로 변환합니다.
            std::cout << (char)toupper(arr[i][j]) << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}