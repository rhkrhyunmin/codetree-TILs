#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> segments(n);
    for (int i = 0; i < n; ++i) {
        cin >> segments[i].first >> segments[i].second;
    }

    vector<int> points(101, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = segments[i].first; j <= segments[i].second; ++j) {
            points[j]++;
        }
    }

    int max_overlap = *max_element(points.begin(), points.end());
    cout << max_overlap << endl;

    return 0;
}