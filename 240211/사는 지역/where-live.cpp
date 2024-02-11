#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person {
public:
    string name;
    string address;
    string city;

    Person(string n, string a, string c) : name(n), address(a), city(c) {}
};

int main() {
    int n;
    cin >> n;

    vector<Person> people;

    for (int i = 0; i < n; ++i) {
        string name, address, city;
        cin >> name >> address >> city;
        people.push_back(Person(name, address, city));
    }

    Person slowest_person = people[0];

    for (int i = 1; i < n; ++i) {
        if (people[i].name > slowest_person.name) {
            slowest_person = people[i];
        }
    }

    cout << "name " << slowest_person.name << endl;
    cout << "addr " << slowest_person.address << endl;
    cout << "city " << slowest_person.city << endl;

    return 0;
}