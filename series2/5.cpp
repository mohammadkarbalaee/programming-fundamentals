#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long n, divisor=0;
	cin >> n;
	for (int i = 1; i < (n - 1); i++)
	{
		if (n%i == 0)
		{
			divisor = divisor + i;
		}
		else
		{
			continue;
		}
	}
	if (divisor == n)
	{
		cout << "1";
	}
	else
	{
		cout << "0";
	}
	return 0;
}
