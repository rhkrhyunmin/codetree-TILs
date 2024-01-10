#include <iostream>
#include <vector>
#include <limits>  
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    int minDifference = numeric_limits<int>::max();  
    for (int i = 1; i < n; ++i) {
        int difference = numbers[i] - numbers[i - 1];
        if (difference < minDifference) {
            minDifference = difference;
        }
    }

    cout << minDifference << endl;

    return 0;
}