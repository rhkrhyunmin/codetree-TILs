#include <iostream>
#include <string>

using namespace std;

class Agent {
public:
    string codeName;
    int score;

    // 생성자
    Agent(string name, int s) {
        codeName = name;
        score = s;
    }
};

int main() {
    Agent agents[5] = {{"", 101}, {"", 101}, {"", 101}, {"", 101}, {"", 101}}; // Agent 객체 배열 생성 및 초기화

    // Agent 객체를 입력 받음
    for (int i = 0; i < 5; ++i) {
        string name;
        int score;
        cin >> name >> score;
        agents[i] = Agent(name, score);
    }

    // 가장 낮은 점수를 가진 요원의 정보 출력
    int minScore = 101; // 초기 최소값 설정
    string minAgentName; // 최소 점수를 가진 요원의 코드네임
    for (int i = 0; i < 5; ++i) {
        if (agents[i].score < minScore) {
            minScore = agents[i].score;
            minAgentName = agents[i].codeName;
        }
    }

    // 결과 출력
    cout <<  minAgentName  << minScore << endl;

    return 0;
}