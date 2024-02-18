#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> sequence(N);
    vector<int> dp(N, 1); // dp[i]에는 i까지의 증가하는 연속 부분 수열의 최대 길이를 저장

    for (int i = 0; i < N; ++i) {
        cin >> sequence[i];
    }

    // 동적 계획법을 이용하여 각 위치에서의 최대 길이를 구함
    for (int i = 1; i < N; ++i) {
        if (sequence[i] > sequence[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        }
    }

    // 최대 길이를 찾음
    int max_length = *max_element(dp.begin(), dp.end());

    cout << max_length << endl;

    return 0;
}