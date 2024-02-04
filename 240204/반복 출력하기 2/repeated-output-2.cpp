#include <iostream>
#include <string>

using namespace std;

void PrintWorld(int n)
{
    for(int i =0; i < n; i++)
    {
        cout << "HelloWorld" << endl;
    }
}

int main() {
    int a;
    cin >> a;
    PrintWorld(a);
    return 0;
}