#include <iostream>
using namespace std;

class User {
public:
    string id;
    int level;

    // 생성자 정의
    User(string id, int level) {
        this->id = id;
        this->level = level;
    }

    // 사용자 정보 출력 메서드
    void printUserInfo() {
        cout << "product " << level << " is " << id << endl;
    }
};

int main() {
    string id;
    int level;

    // 첫 번째 입력
    cin >> id >> level;

    // 첫 번째 사용자 출력
    User user1("codetree", 50);
    user1.printUserInfo();

    // 두 번째 입력
    cin >> id >> level;

    // 두 번째 사용자 출력
    User user2(id, level);
    user2.printUserInfo();

    return 0;
}