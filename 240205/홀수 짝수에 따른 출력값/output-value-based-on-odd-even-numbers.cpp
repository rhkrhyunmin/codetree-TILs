#include <iostream>

int sumOddOrEven(int start, int end) {
    if (start > end) {
        return 0;
    }

    return start + sumOddOrEven(start + 2, end);
}

int main() {
    int N;
    std::cin >> N;

    if (N < 1 || N > 100) {
        return 1;
    }

    int result;
    if (N % 2 == 1) {
        // N is odd
        result = sumOddOrEven(1, N);
    } else {
        // N is even
        result = sumOddOrEven(2, N);
    }
    
    std::cout <<  result << std::endl;

    return 0;
}