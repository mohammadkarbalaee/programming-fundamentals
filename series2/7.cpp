#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, rem, i = 0;
	cin >> n;
	int o = n;
	while (o != 0)
	{
		i++;
		o = o/ 16;
	}
	while (i > 0)
	{
		int k = pow(16, i - 1);

		rem = n / k;
		n = n % k;
		i--;

		if (rem == 10)
		{
			cout << "A";
		}
		else if (rem == 11)
		{
			cout << "B";
		}
		else if (rem == 12)
		{
			cout << "C";
		}
		else if (rem == 13)
		{
			cout << "D";
		}
		else if (rem == 14)
		{
			cout << "E";
		}
		else if (rem == 15)
		{
			cout << "F";
		}
		else if (rem < 10)
		{
			cout << rem;
		}
	}
	return 0;
}