#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int height;
    int weight;
};

// 키를 기준으로 오름차순으로 정렬하기 위한 비교 함수
bool compareHeight(const Person& a, const Person& b) {
    return a.height < b.height;
}

int main() {
    int n;
    cin >> n;

    vector<Person> people(n);

    for (int i = 0; i < n; ++i) {
        cin >> people[i].name >> people[i].height >> people[i].weight;
    }

    // 키를 기준으로 정렬
    sort(people.begin(), people.end(), compareHeight);

    // 정렬된 결과 출력
    for (const auto& person : people) {
        cout << person.name << " " << person.height << " " << person.weight << endl;
    }

    return 0;
}