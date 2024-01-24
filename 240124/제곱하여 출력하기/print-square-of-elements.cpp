#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int num[100];
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		num[i] *= num[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << num[i] << ' ';
	}

}