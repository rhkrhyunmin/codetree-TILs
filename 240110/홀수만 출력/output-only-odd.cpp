#include <iostream>
using namespace std;

int main() {
	int n,m = 0;
	cin >> n >> m;

	for (int i = n; i <= m; i += 2)
	{
		cout << i << ' ';
	}
}