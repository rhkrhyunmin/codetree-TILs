#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int num;
    while (cin >> num) {
        arr.push_back(num);
    }

    int result = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 3 == 0) {
            if (i > 0) {
                result = arr[i - 1];
            }
            break;
        }
    }

    cout << result << endl;

    return 0;
}