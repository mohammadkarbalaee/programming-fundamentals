#include <iostream>
#include<string>
#include<cmath>
using namespace std;

long long gcd(long long x, long long y)
{
	long long Max, Min, rem;
	Max = max(x, y);
	Min = min(x, y);
	if (Max%Min == 0)
	{
		return Min;
	}
	rem = Max % Min;
	

	return gcd(Min, Max%Min);
}
int main()
{
	long long input1, input2;
	cin >> input1 >> input2;
	cout << gcd(input1,input2);

	return 0;
}