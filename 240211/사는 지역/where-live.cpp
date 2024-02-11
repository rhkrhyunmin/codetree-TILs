#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
public:
    string name;
    string address;
    string id;

    Person(string n, string a, string i) : name(n), address(a), id(i) {}

    // 비교 연산자 오버로딩
    bool operator<(const Person& other) const {
        // 이름을 기준으로 비교
        return name < other.name;
    }
};

int main() {
    int n;
    cin >> n;
    
    vector<Person> people;

    for (int i = 0; i < n; ++i) {
        string name, address, id;
        cin >> name >> id >> address;
        people.push_back(Person(name, address, id));
    }

    // 사람들을 이름 기준으로 정렬
    sort(people.begin(), people.end());

    // 이름이 가장 느린 사람 출력
    cout << people.back().name << " " << people.back().id << " " << people.back().address << endl;

    return 0;
}