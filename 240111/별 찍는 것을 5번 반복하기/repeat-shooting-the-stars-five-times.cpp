#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void poly()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int main() {
    for (int i = 0; i < 5; i++)
    {
        poly();
    }
    return 0;
}