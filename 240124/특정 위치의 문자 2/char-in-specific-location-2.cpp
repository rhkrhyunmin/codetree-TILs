#include <iostream>

using namespace std;

int main()
{
	string str[100];

	for (int i = 0; i < 10; i++)
	{
		cin >> str[i];
	}

	cout << str[1] << ' ' << str[4] << ' ' << str[7];
}