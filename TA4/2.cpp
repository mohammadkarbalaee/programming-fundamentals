#include <iostream>
#include<string>
using namespace std;

long long sum_num(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	int rem;
	rem = n % 10;
	n /= 10;

	return rem + sum_num(n);
}
int main()
{
	long long input;
	cin >> input;
	cout << sum_num(input);

	return 0;
}