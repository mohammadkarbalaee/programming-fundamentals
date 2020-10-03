#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long k = 0, i = 0, j;
	double x, y, z;
	cin >> x;
	y = abs(x);
	j = int(y);
	z = y - j;
	for (; z > 0.00001;)
	{
		z = z * 10;
		k = k + 1;
		z = z - floorf(z);
	}
	if (j != 0)
	{
		i = int(log10(j)) + 1;
	}
	else if (j == 0)
	{
		i = 0;
	}
	cout << i << " " << k;
	return 0;
}