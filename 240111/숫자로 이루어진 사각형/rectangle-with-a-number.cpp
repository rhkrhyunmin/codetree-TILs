#include <iostream>

void printSquare(int n) {
    int currentNumber = 1;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << currentNumber << " ";
            currentNumber = (currentNumber % 9) + 1; 
        }
        std::cout << std::endl;
    }
}

int main() {
    int N;

    std::cin >> N;

    printSquare(N);

    return 0;
}