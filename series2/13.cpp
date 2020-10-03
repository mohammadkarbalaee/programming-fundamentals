#include<iostream>

using namespace std;

int main()
{
	long long m, N;

	cin >> m;

	while (m > 0)
	{
		cin >> N;
		if (N % 2 == 0)
		{
			cout << "A Wins!\n";
		}
		if (N % 2 != 0)
		{
			cout << "B Wins!\n";
		}

		m = m - 1;
	}

	return 0;
}