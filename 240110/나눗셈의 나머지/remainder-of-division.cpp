#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    vector<int> remainderCount(b, 0);

    while (a > 1) {
        int remainder = a % b;
        remainderCount[remainder]++;
        a /= b;
    }

    long long result = 0;
    for (int i = 0; i < b; i++) {
        result += (long long)remainderCount[i] * remainderCount[i];
    }

    cout << result << endl;

    return 0;
}