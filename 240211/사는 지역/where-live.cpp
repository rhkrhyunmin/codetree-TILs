#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 사람 정보를 담는 구조체
struct Person {
    string name;
    string address;
    string streetNumber;
};

// 사전 순으로 이름을 비교하기 위한 비교 함수
bool compareNames(const Person& p1, const Person& p2) {
    return p1.name < p2.name;
}

int main() {
    int n;
    cin >> n;

    vector<Person> people(n);

    // 사람들의 정보 입력
    for (int i = 0; i < n; ++i) {
        cin >> people[i].name >> people[i].streetNumber >> people[i].address;
    }

    // 이름을 기준으로 정렬
    sort(people.begin(), people.end(), compareNames);

    // 가장 느린 사람의 정보 출력
    cout << "name" << people[n - 1].name << " " << endl << "addr" <<people[n - 1].streetNumber<< " " << endl << "city" << people[n - 1].address << endl;

    return 0;
}