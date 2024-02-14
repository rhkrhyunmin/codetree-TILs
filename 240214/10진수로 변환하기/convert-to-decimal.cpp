#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string binary;
    cin >> binary;

    int decimal = 0;
    int power = 0;

    // 입력된 2진수를 뒤에서부터 시작하여 각 자리에 해당하는 10진수 값을 더합니다.
    for (int i = binary.size() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    cout << decimal << endl;

    return 0;
}