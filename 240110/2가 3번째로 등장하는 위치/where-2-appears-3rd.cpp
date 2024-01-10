#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int count2 = 0;
    int position = -1;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] == 2) {
            count2++;
            if (count2 == 3) {
                position = i + 1;  
                break;
            }
        }
    }
    cout << position << endl;

    return 0;
}