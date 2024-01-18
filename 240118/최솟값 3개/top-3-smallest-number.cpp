#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers;
    priority_queue<int> maxHeap; // 최대 힙을 사용하여 최솟값 3개를 유지

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.push_back(num);

        maxHeap.push(num);

        // 최대 힙이 3개 이상의 요소를 가지면 가장 큰 값을 제거
        while (maxHeap.size() > 3) {
            maxHeap.pop();
        }

        // 아직 3개의 숫자가 주어지지 않았다면 -1을 출력
        if (maxHeap.size() < 3) {
            cout << "-1" << endl;
        } else {
            // 최솟값 3개의 곱을 출력
            long long product = 1;
            priority_queue<int> tempHeap = maxHeap;
            while (!tempHeap.empty()) {
                product *= tempHeap.top();
                tempHeap.pop();
            }
            cout << product << endl;
        }
    }

    return 0;
}