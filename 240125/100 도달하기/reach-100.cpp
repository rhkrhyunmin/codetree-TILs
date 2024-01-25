#include <iostream>

int main() {
    int n;

    std::cin >> n;

    if (n < 1 || n > 10) {
        return 1; // 프로그램 종료
    }

    int firstTerm = 1;
    int secondTerm = n;

    // 첫 번째 항 출력
    std::cout << firstTerm << " ";

    // 두 번째 항 출력
    std::cout << secondTerm << " ";

    // 세 번째 항부터 계산하여 출력
    while (true) {
        int nextTerm = firstTerm + secondTerm;
        if (nextTerm > 199) {
            break; // 100을 넘으면 종료
        }

        std::cout << nextTerm << " ";

        // 다음 항을 위해 갱신
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}