#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> words(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> words[i];
    }

    std::sort(words.begin(), words.end());
    for (const std::string& word : words) {
        std::cout << word << std::endl;
    }

    return 0;
}