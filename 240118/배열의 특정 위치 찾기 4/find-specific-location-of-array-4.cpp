#include <iostream>
using namespace std;

int main()
{
	int n[10];

	int count = 0;
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> n[i];
		while (n[i] != 0)
		{
			if (n[i] % 2 == 0)
			{
				count++;
				result += n[i];
			}
			break;
		}
	}
	cout << count << " " << result;
}