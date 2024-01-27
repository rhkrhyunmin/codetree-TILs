#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> scoreCounts(11, 0); // 10점 단위로 구분된 점수대별 학생 수를 저장하는 배열

    while (true) {
        int score;
        cin >> score;

        if (score == 0) {
            break; // 0이 입력되면 입력 종료
        }

        if (score >= 10) {
            int scoreIndex = score / 10; // 10점 단위로 구분된 인덱스 계산
            scoreCounts[scoreIndex]++; // 해당 점수대별 학생 수 증가
        }
    }

    // 각 점수대별 학생 수 출력
    for (int i = 10; i > 0; --i) {
        cout << i * 10 << " - " << scoreCounts[i] << endl;
    }

    return 0;
}