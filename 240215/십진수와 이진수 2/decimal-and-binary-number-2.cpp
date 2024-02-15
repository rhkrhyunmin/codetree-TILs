#include <iostream>
#include <string>
#include <cmath>

// 이진수를 십진수로 변환하는 함수
int binaryToDecimal(const std::string& binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        ++power;
    }
    return decimal;
}

// 십진수를 이진수로 변환하는 함수
std::string decimalToBinary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary = std::to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    std::string N;
    std::cin >> N;

    // 이진수를 십진수로 변환
    int decimalN = binaryToDecimal(N);

    // 17을 곱한 후 다시 이진수로 변환
    int resultDecimal = decimalN * 17;
    std::string resultBinary = decimalToBinary(resultDecimal);

    // 결과 출력
    std::cout << resultBinary << std::endl;

    return 0;
}