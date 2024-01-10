#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a,b;
    getline(cin, a);
    getline(cin, b);

    a.erase(remove(a.begin(), a.end(), ' '), a.end());
    b.erase(remove(b.begin(), b.end(), ' '), b.end());

    cout << a + b << endl;

    return 0;
}