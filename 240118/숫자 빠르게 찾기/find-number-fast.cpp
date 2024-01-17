#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid + 1;  // 1-based index
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // Not found
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());  // 정렬

    for (int i = 0; i < m; i++) {
        int num;
        std::cin >> num;

        int result = binarySearch(numbers, num);
        std::cout << result << std::endl;
    }

    return 0;
}