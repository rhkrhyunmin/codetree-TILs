#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> count(7, 0); 

    for (int i = 0; i < 10; ++i) {
        int result;
        cin >> result;
        count[result]++;
    }

    for (int i = 1; i <= 6; ++i) {
        cout << i << " - " << count[i] << endl;
    }

    return 0;
}