#include <iostream>
using namespace std;

int main()
{
	int num_rows, coeffi = 1;

	cin >> num_rows;

	for (int i = 0; i < num_rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
			{
				coeffi = 1;
			}
			else
			{
				coeffi = coeffi * (i - j + 1) / j;
			}
			cout << coeffi << " ";
		}
		cout << endl;
	}

	return 0;
}