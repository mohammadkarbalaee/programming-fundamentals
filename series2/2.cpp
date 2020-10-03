#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long Min, Max, x, y,lcm, gcd,rem;
	cin >> x >> y;
	Max = max(x, y);
	Min = min(x, y);
	
	while (true)
	{ 
		rem = Max % Min;
		if (rem == 0)
		{
			gcd = Min;
			break;
		}
		else
		{
			Max = Min;
			Min = rem;
		}
	}
	lcm = (x*y) / gcd;
	cout << gcd << " " << lcm;
	return 0;
}