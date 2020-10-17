#include <iostream>
using namespace std;

long long reverse(long long input)
{
	long long temp0, ans = 0;
	while (input > 0)
	{
		ans += input % 10;
		ans *= 10;
		input /= 10;
	}
	ans /= 10;
	return ans;
}

int main()
{
	long long x, count = 0, fake, rem1 = 0, reverse_num = 0, rem2;
	cin >> x;
	fake = x;

	if (x == 0)
	{
		cout << "0: ";
	}
	if (x != 0)
	{
		while (fake % 10 == 0)
		{
			fake = fake / 10;
			count++;
		}

		reverse_num = reverse(x);

		while (reverse_num > 0)
		{
			rem2 = reverse_num % 10;
			reverse_num = reverse_num / 10;
			cout << rem2 << ": ";

			for (int i = 0; i < rem2; i++)
			{
				cout << rem2;
			}
			cout << endl;

		}
		for (long long j = 0; j < count; j++)
		{
			cout << "0: " << endl;
		}
	}
	return 0;
}
