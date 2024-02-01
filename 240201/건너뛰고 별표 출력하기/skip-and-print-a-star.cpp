#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		if (i >= 1)
		{
			cout << endl;
		}
		
		for (int j = n; j >= n - i; j--)
		{
			
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		if (i >= 0)
		{
			cout << endl;
		}
		
		for (int j = 1; j < n - i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
}