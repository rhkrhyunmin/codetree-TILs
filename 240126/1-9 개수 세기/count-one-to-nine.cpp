#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> count(10, 0); 

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        count[num]++;
    }

    for (int i = 1; i <= 9; ++i) {
        cout << count[i] << endl;
    }

    return 0;
}