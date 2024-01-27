#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> count(10, 0); // 십의 자리 숫자 개수를 저장할 배열

    while (true) {
        int num;
        cin >> num;

        if (num == 0) {
            break; // 0이 입력되면 입력 종료
        }

        int tensDigit = num / 10; // 입력된 수의 십의 자리 숫자 계산
        count[tensDigit]++; // 해당 십의 자리 숫자의 개수 증가
    }

    // 각 십의 자리 숫자의 개수 출력
    for (int i = 1; i < 10; ++i) {
        if (count[i] > 0) {
            cout << i << "-" << count[i] << endl;
        }
    }

    return 0;
}