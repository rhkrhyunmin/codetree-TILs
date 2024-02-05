#include <iostream>

using namespace std;

int Fatoreal(int n)
{
    int count = 0;
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * Fatoreal(n - 1);
    }
}

int main() {
    int a;
    cin >> a;

    int result = Fatoreal(a);
    cout << result;
    
    return 0;
}