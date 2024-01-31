#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;

    for(int i =0; i < a; i++)
    {
        int co = 1;
        for(int j  = 0; j <= i; j++)
        {
            cout << co << " ";

            co = co * (i - j) / (j  +1);
        }
        cout << endl;
    }
    return 0;
}