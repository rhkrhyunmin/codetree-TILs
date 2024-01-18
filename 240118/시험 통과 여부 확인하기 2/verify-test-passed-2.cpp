#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int score[4];

		for (int j = 0; j < 4; j++)
		{
			cin >> score[j];
		}

		int totalScore = 0;
		for (int j = 0; j < 4; j++)
		{
			totalScore += score[j];
		}

		int avarage = totalScore / 4;

		if (avarage >= 60)
		{
			cout << "pass" << endl;
			count++;
		}
		else {
			cout << "fail" << endl;
		}
	}

	cout << count << endl;
}