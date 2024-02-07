#include <iostream>
using namespace std;

class Student {
public:
    string secretCode;
    char meetingPlace;
    int timer;

    // 생성자 정의
    Student(string screetCode, char MeetingPlace, int timer) {
        this->secretCode = screetCode;
        this->meetingPlace = MeetingPlace;
        this->timer = timer;
    }
};

int main() {
    string Sc;
    char MP;
    int timer;

    cin >> Sc >> MP >> timer;

    // Student 클래스의 객체 생성
    Student student(Sc, MP, timer);

    cout << "secret code : " << student.secretCode << endl;
    cout << "meeting point : " << student.meetingPlace << endl;
    cout << "time : " << student.timer << endl;
    
    return 0;
}