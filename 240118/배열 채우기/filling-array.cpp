#include <iostream>
using namespace std;

int main() {
    const int maxSize = 10;
    int arr[maxSize];
    int input;
    int count = 0;

    // 0이 나올 때까지 최대 10개의 정수 입력 받기
    while (count < maxSize) {
        cin >> input;
        if (input == 0) {
            break;
        }
        arr[count] = input;
        count++;
    }

    // 가장 나중에 입력된 정수부터 차례대로 출력
    for (int i = count - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}