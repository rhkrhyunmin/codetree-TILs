#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    std::cin >> n >> k;

    vector<int> num(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> num[i];
    }

    sort(num.begin(), num.end());
    cout << num[k - 1];

    return 0;
}