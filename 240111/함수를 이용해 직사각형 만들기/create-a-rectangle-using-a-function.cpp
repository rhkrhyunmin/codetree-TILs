#include <iostream>
using namespace std;

void printRectangle(int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << "1";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n, m;

    std::cin >> n;

    std::cin >> m;

    printRectangle(n, m);

    return 0;
}