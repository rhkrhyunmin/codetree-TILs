#include <iostream>
using namespace std;

int main()
{
	char ch[6] = { 'L','E','B','R','O','S' };

	char word;
	cin >> word;
	int index = -1;

	for (int i = 0; i < 6; i++)
	{
		if (ch[i] == word)
		{
			index = i;
		}
	}

	if (index == -1)
	{
		cout << "None";
	}
	else
	{
		cout << index;
	}
}