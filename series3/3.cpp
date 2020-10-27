#include<iostream>
using namespace std;

long long intpow(long long base, long long power)
{
	long long k = 1;
	for (long long i = 1; i <= power; i++)
	{
		k = k * base;
	}
	return k;
}

int factorial(int n)
{
	{
		int factorial;
		factorial = 1;
		while (n > 0)
		{
			factorial = factorial * n;
			n--;
		}
		return factorial;
	}
}
int combination(int a, int b)
{
	int result;
	result = factorial(a) / (factorial(a - b)*factorial(b));
	return result;
}
int bino(int a, int x, int n)
{
	int output = 0;
	for (int k = 0; k <= n; k++)
	{
		output = output + (combination(n, k)*intpow(x, k)*intpow(a, n - k));
	}
	return output;
}
int main()
{
	int a, x, n, end;
	cin >> a >> x >> n;
	end = bino(a, x, n);
	cout << end;

	return 0;
}