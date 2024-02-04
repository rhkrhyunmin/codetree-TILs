#include <iostream>
using namespace std;

void PrintNum(int n)
{
    for(int i =1; i <= n; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    for(int i = n; i >= 1; --i)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int a;
    cin >> a;
    PrintNum(a);
    return 0;
}