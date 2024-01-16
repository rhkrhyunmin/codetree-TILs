#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main() {
    // 입력 받기
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    // 중복 제거 및 오름차순 정렬
    std::vector<int> uniqueNumbers = numbers;
    std::sort(uniqueNumbers.begin(), uniqueNumbers.end());
    uniqueNumbers.erase(std::unique(uniqueNumbers.begin(), uniqueNumbers.end()), uniqueNumbers.end());

    // 각 숫자의 처음으로 주어진 위치 출력
    std::map<int, int> firstOccurrence;
    for (int i = 0; i < n; ++i) {
        if (firstOccurrence.find(numbers[i]) == firstOccurrence.end()) {
            firstOccurrence[numbers[i]] = i + 1;
        }
    }

    // 결과 출력
    for (int num : uniqueNumbers) {
        std::cout << num << " " << firstOccurrence[num] << std::endl;
    }

    return 0;
}