#include <iostream>
using namespace std;

int main() {
    // 첫 번째 항과 두 번째 항 입력 받기
    int a1, a2;
    cin >> a1 >> a2;

    // 수열 계산 및 출력
    cout << a1 << " " << a2 << " ";

    for (int i = 3; i <= 10; i++) {
        int an = a2 + 2 * a1;
        cout << an << " ";
        a1 = a2;
        a2 = an;
    }

    return 0;
}