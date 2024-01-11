#include <iostream>

// 재귀 함수로 삼각형 출력
void printTriangle(int n) {
    if (n == 0) {
        return;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;

    printTriangle(n - 1);
}

void printReverseTriangle(int n) {
    if (n == 0) {
        return;
    }

    printReverseTriangle(n - 1);

    for (int i = 0; i < n; ++i) {
        std::cout << "* ";
    }
    std::cout << std::endl;
}

int main() {
    int N;

    std::cin >> N;

    // 삼각형 출력
    printTriangle(N);

    // 역삼각형 출력
    printReverseTriangle(N - 1);

    return 0;
}