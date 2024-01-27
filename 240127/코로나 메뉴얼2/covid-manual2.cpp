#include <iostream>

using namespace std;

int main() {
    int countA = 0, countB = 0, countC = 0;

    // 3명의 감기 증상과 체온 입력
    for (int i = 0; i < 3; ++i) {
        char symptom;
        double temperature;
        
        cin >> symptom >> temperature;

        if (symptom == 'Y' && temperature >= 37.0) {
            // A: 증상 있고 체온 37℃ 이상
            countA++;
        } else if (symptom == 'N' && temperature >= 37.0) {
            // B: 증상 없고 체온 37℃ 이상
            countB++;
        } else if (symptom == 'Y' && temperature < 37.0) {
            // C: 증상 있고 체온 정상
            countC++;
        }
        // D: 둘 다 괜찮은 경우는 생략
    }

    cout << countA << " " << countB << " " << countC << " ";

    // E: 위급상황인 경우 출력
    if (countA >= 2) {
        cout << "E";
    } else {
        cout << "D";
    }

    return 0;
}