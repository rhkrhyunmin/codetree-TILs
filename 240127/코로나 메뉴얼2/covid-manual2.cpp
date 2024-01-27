#include <iostream>

using namespace std;

int main() {
    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
    char ch;

    // 3명의 감기 증상과 체온 입력
    for (int i = 0; i < 3; ++i) {
        char symptom;
        double temperature;

        cin >> symptom >> temperature;

        if (symptom == 'Y' && temperature >= 37.0) {
            // A: 증상 있고 체온 37℃ 이상
            countA++;
        }
        else if (symptom == 'N' && temperature >= 37.0) {
            // B: 증상 없고 체온 37℃ 이상
            countB++;
        }
        else if (symptom == 'Y' && temperature < 37.0) {
            // C: 증상 있고 체온 정상
            countC++;
        }
        else if (symptom == 'N' && temperature < 37.0) {
            // D: 둘 다 괜찮은 경우
            countD++;
        }
    }

    // E: 위급상황인 경우 계산
    if (countA >= 2) {
        countE = 1;
    }

    if (countB > 1)
    {
        cout << countA << " " << countB << " " << countC << " " << countD << " " << "E";
    }
    else {
        // 각 진료소에 보내지는 인원 출력
        cout << countA << " " << countB << " " << countC << " " << countD << " " << countE;
    }

    

    return 0;
}