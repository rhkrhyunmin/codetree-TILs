#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;

	for (int i = n; i <= n * 5; i+= n)
	{
		cout << i << ' ';
	}
}