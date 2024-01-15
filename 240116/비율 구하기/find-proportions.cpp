#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> frequency;
    vector<string> strings;

    // 입력 받기
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        frequency[str]++;
    }

    // 맵의 key 값을 모두 가져와서 정렬
    for (const auto& entry : frequency) {
        strings.push_back(entry.first);
    }
    sort(strings.begin(), strings.end());

    // 전체 문자열의 개수 계산
    int total = n;

    // 비율 출력
    cout << fixed << setprecision(4);
    for (const auto& str : strings) {
        double ratio = static_cast<double>(frequency[str]) / total * 100.0;
        cout << str << " " << ratio << endl;
    }

    return 0;
}