#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.push_back(num);

        minHeap.push(num);

        // 현재까지의 숫자가 3개보다 많으면 가장 작은 수를 제거
        if (minHeap.size() > 3) {
            minHeap.pop();
        }

        // 아직 3개의 숫자가 채워지지 않았으면 -1 출력
        if (minHeap.size() < 3) {
            cout << "-1" << endl;
        } else {
            // 가장 작은 3개의 숫자의 곱 출력
            long long product = 1;
            priority_queue<int, vector<int>, greater<int>> tempHeap = minHeap;
            while (!tempHeap.empty()) {
                product *= tempHeap.top();
                tempHeap.pop();
            }
            cout << product << endl;
        }
    }

    return 0;
}