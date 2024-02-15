#include <iostream>
#include <stack>

// 10진수를 B진수로 변환하는 함수
std::string convertToBase(int N, int B) {
    std::stack<int> digits;
    
    // N이 0이면 바로 반환
    if (N == 0)
        return "0";

    // N을 B진수로 변환하여 digits 스택에 저장
    while (N > 0) {
        digits.push(N % B);
        N /= B;
    }

    // 스택에서 꺼내면서 문자열로 변환
    std::string result = "";
    while (!digits.empty()) {
        int digit = digits.top();
        digits.pop();
        result += std::to_string(digit);
    }

    return result;
}

int main() {
    int N, B;
    std::cin >> N >> B;

    // B가 4 또는 8이 아닌 경우 에러 메시지 출력
    if (B != 4 && B != 8) {
        std::cout << "Invalid base! Please enter either 4 or 8." << std::endl;
        return 1; // 프로그램 종료
    }

    // N을 B진수로 변환하여 출력
    std::cout << convertToBase(N, B) << std::endl;

    return 0;
}