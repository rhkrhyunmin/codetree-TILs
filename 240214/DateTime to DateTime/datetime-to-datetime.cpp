#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int minutes = (a - 11) * 24 * 60 + (b - 11) * 60 + (c - 11);
    
    if (minutes < 0) {
        cout << -1 << endl;
    } else {
        cout << minutes << endl;
    }

    return 0;
}