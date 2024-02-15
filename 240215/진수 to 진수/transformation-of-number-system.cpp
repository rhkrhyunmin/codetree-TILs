#include <iostream>
#include <string>
#include <cmath>

// a진수를 십진수로 변환하는 함수
int toDecimal(const std::string& n, int base) {
    int decimal = 0;
    int power = 0;
    for (int i = n.length() - 1; i >= 0; --i) {
        int digit = n[i] - '0';
        decimal += digit * pow(base, power);
        ++power;
    }
    return decimal;
}

// 십진수를 b진수로 변환하는 함수
std::string toBase(int decimal, int base) {
    if (decimal == 0) return "0";
    std::string result = "";
    while (decimal > 0) {
        int remainder = decimal % base;
        result = std::to_string(remainder) + result;
        decimal /= base;
    }
    return result;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::string n;
    std::cin >> n;

    // a진수를 십진수로 변환
    int decimal_n = toDecimal(n, a);

    // 십진수를 b진수로 변환
    std::string result = toBase(decimal_n, b);

    // 결과 출력
    std::cout << result << std::endl;

    return 0;
}