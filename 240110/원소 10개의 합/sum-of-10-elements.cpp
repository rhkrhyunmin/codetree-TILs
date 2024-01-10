#include <iostream>
using namespace std;

int main() {
    // 10개의 원소 입력 받기
    int arr[10];
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    // 원소의 합 계산
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }

    // 결과 출력
    cout << sum << endl;

    return 0;
}