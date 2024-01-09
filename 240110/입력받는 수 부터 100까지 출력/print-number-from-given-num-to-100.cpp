#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int a = 0;
    for (int i = n; i < 101; i++)
    {
        a = i;
        std::cout << a << ' ';
    }
    return 0;
}