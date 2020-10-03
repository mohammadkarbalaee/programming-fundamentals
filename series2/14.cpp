#include <iostream>

using namespace std;

int main()
{
	
	long long j=1, f, b, c, z, m;

	cin >> m;

	z = f = (m - 1) / 2;

	for (; f >= 0; f--)
	{
		cout.width(f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
			{
				cout << "*";
			}
			else
			{
				break;
			}

		}

		cout.width(2 * f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
		    {
				cout << "*";
		    }
			else
			{
				break;
			}
				
		}

		cout << endl;

		j = j + 2;
	}
	f = f + 2;
	j = j - 4;

	for (; f <= z; f++)
	{
		cout.width(f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
			{
				cout << "*";
			}
			else
			{
				break;
			}
		}

		cout.width(2 * f + 1);

		for (b = 1; b <= j; b++)
		{
			if (b <= j)
			{
				cout << "*";
			}
			else
			{
				break;
			}
		}

		cout << endl;

		j = j - 2;
	}


	return 0;
}
