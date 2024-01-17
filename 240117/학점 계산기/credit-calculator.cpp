#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // 과목의 수 입력
    int n;
    cin >> n;

    // 각 과목의 학점 입력
    vector<double> grades(n);
    for (int i = 0; i < n; ++i) {
        cin >> grades[i];
    }

    // 평균학점 계산
    double total = 0.0;
    for (int i = 0; i < n; ++i) {
        total += grades[i];
    }
    double average = total / n;

    // 소수 첫째 자리까지 출력
    cout << fixed << setprecision(1) << average << endl;

    // 등급 출력
    if (average >= 4.0) {
        cout << "Perfect" << endl;
    } else if (average >= 3.0) {
        cout << "Good" << endl;
    } else if (average >= 2.0) {
        cout << "Poor" << endl;
    } else {
        cout << "Poor" << endl;
    }

    return 0;
}