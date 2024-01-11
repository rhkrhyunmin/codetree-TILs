#include <iostream>

int main() {
    int a, c;
    char o;

    std::cin >> a >> o >> c;

    switch (o) {
    case '+':
        std::cout << a << " + " << c << " = " << a + c << std::endl;
        break;
    case '-':
        std::cout << a << " - " << c << " = " << a - c << std::endl;
        break;
    case '*':
        std::cout << a << " * " << c << " = " << a * c << std::endl;
        break;
    case '/':
        if (c != 0) {
            std::cout << a << " / " << c << " = " << static_cast<int>(a) / c << std::endl;
        }
        break;
    }
    return 0;
}