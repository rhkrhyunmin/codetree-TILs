#include <iostream>
using namespace std;

int main() {
    int binary[5] = { 1, 1, 1, 0, 1 };
    int num = 0;

    for (int i = 0; i < 5; i++)
        num = num * 2 + binary[i];

    cout << num;
}