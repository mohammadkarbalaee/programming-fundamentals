#include<iostream>
#include<cmath>

using namespace std;

int intpow(int base, int power)
{
	int k = 1;
	for (int i = 1; i <= power; i++)
	{
		k = k * base;
	}
	return k;
}


int main()
{
	long long a, b, rem1 = 0, k, digits = 0, changed = 0, digitsf, rem2 = 0, sum1 = 0, sum2 = 0;

	cin >> a >> b;

	k = a;

	while (k > 0)
	{
		k = k / b;

		digits++;
	}

	digitsf = digits;

	while (a > 0)
	{
		rem1 = a % b;

		a = a / b;

		changed = (intpow(10, digitsf)*rem1) + changed;

		--digitsf;
	}

	for (; changed > 0; digits--)
	{
		rem2 = changed % 10;

		changed = changed / 10;

		if (digits % 2 == 0)
		{
			sum1 = sum1 + rem2;
		}

		if (digits % 2 == 1)
		{
			sum2 = sum2 + rem2;
		}

	}

	if (sum1 == sum2)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}