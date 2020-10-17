#include <iostream>

using namespace std;

int main()
{
	int input;

	cin >> input;

	for (int i = 0; i < 2 * input - 1; i++)
	{
		if (i < input)
		{
			for (int j = 0; j < input - i - 1; j++)
			{
				cout << " ";
			}
			for (int j = 0; j <= i; j++)

			{
				cout << j + 1 << " ";
			}
			for (int j = i; j > 0; j--)
			{
				cout << j << " ";
			}

			cout << endl;
		}
		else
		{
			for (int j = 0;j<i - input +1;j++)
			{
				cout << " ";
			}
			for (int j = 0; j < 2 * input - i - 1; j++)
			{
				cout << j + 1 << " ";
			}
			for (int j = 2 * input - i - 2; j > 0; j--)
			{
				cout << j<<" ";
			}

			cout << endl;
		}
		
	}
}