#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int num[100];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];

		if (num[i] % 2 == 0)
		{
			cout << num[i] << ' ';
		}
	}
}