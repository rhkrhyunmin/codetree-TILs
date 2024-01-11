#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;

    std::cin >> n;

    std::vector<int> sequenceA(n);
    std::vector<int> sequenceB(n);


    for (int i = 0; i < n; ++i) {
        std::cin >> sequenceA[i];
    }


    for (int i = 0; i < n; ++i) {
        std::cin >> sequenceB[i];
    }


    std::sort(sequenceA.begin(), sequenceA.end());
    std::sort(sequenceB.begin(), sequenceB.end());

    if (sequenceA == sequenceB) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}