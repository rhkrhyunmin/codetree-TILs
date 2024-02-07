#include <iostream>
using namespace std;

int findSequenceValue(int N) {
    if (N == 1) return 2;
    if (N == 2) return 4;
    return (findSequenceValue(N - 1) * findSequenceValue(N - 2)) % 100;
}

int main() {
    int N;
    cin >> N;

    if (N < 1 || N > 20) {
        return 1;
    }

    int result = findSequenceValue(N);
    cout << result << endl;

    return 0;
}