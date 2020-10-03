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
	
	long long counter = 0, first, rem1 = 0, rem2 = 0, integer;
	;	double n, decimal;
	cin >> n;
	integer = floorf(int(n));
	decimal =(n - integer);

	while ((n - int(n)) != 0)
	{
		n = n * 10;
		counter = counter + 1;
	}
	first = floorf(decimal*intpow(10, counter));
	while (first > 0)
	{
		rem1 = first % 10;
		first = first / 10;
		cout << rem1;
	}
	cout << ".";
	while (integer > 0)
	{
		rem2 = integer % 10;
		integer = integer / 10;
		cout << rem2;
	}
	return 0;
}