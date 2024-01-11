#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    std::cin >> n >> k;

    vector<int> num1(n);
    vector<int> num2(n);

    for (int i = 0; i < n; ++i) {
        cin >> num1[i];
        cin >> num2[i];
    }

    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());

    if (num1[n] == num2[n])
    {
        cout << "Yes";
    }

    else {
        cout << "No";
    }

    return 0;
}