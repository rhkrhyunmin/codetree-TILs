#include <iostream>
using namespace std;

int main() {

	int val[10];
	
	int n;
	cin >> n;

	int result = 1;

	for (int i = 0; i < 10; ++i)
	{
		cin >> val[i];
		result += val[i];
	}

	cout << result;
}