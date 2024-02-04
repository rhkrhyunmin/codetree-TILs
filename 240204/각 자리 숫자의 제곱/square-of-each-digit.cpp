#include <iostream>
using namespace std;

int PrintSum(int n)
{
  if(n ==0)
  {
    return 0;
  }
  else {
    int na = n % 10;
    return na * na + PrintSum(n / 10);
  }
}

int main() {
    int a;
    cin >> a;
    cout << PrintSum(a);
    return 0;
}