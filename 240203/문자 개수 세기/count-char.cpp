#include <iostream>
#include <string>
using namespace std;

int main() {

	string str, str2;
	int n =0;
	getline(cin, str);

	cin >> str2;

	for (char ch : str)
	{
		if (ch == str2[0])
		{
			n++;
		}
	}

	cout << n;
	
	return 0;

}