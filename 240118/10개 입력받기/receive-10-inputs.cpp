#include <iostream>
using namespace std;

int main() {

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += arr[i];
    }

    double avarage = 0;
    for (int i = 0; i < 10; i++)
    {
        avarage = sum / 10.0;
    }

    cout << sum << endl;
    cout << avarage << endl;

    return 0;
}