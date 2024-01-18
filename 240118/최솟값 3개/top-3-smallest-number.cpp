#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers;
    
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;

        numbers.push_back(num);

        if (numbers.size() >= 3) {

            std::sort(numbers.begin(), numbers.end());
            int product = numbers[0] * numbers[1] * numbers[2];
            
            std::cout << product << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
    }

    return 0;
}