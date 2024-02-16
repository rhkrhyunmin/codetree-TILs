#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    int max_length = 0;
    int current_length = 1;
    int prev_sign = numbers[0] < 0 ? -1 : 1;

    for (int i = 1; i < N; ++i) {
        int current_sign = numbers[i] < 0 ? -1 : 1;

        if (current_sign == prev_sign) {
            current_length++;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
            prev_sign = current_sign;
        }
    }

    max_length = max(max_length, current_length);

    cout << max_length << endl;

    return 0;
}