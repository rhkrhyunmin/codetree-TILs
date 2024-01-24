#include <iostream>

using namespace std;

int main() {
    // 초기값 설정
    int first = 0, second = 0;

    cin >> first >> second;

    // 10개의 수열 출력
    for (int i = 0; i < 10; ++i) {
        if (i < 2) {
            // 초기 두 항 출력
            std::cout << ((i == 0) ? first : second) << " ";
        }
        else {
            // 세 번째 항부터는 전전항과 전항의 합을 10으로 나눈 나머지로 설정
            int next = (first + second) % 10;
            std::cout << next << " ";

         
            first = second;
            second = next;
        }
    }

    return 0;
}