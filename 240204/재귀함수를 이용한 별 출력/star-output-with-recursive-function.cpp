#include <iostream>
using namespace std;

void PrintStar(int a)
{
    for(int i =0; i < a; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    PrintStar(n);
}