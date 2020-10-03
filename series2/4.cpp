#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long integer = 0, counter = 0;
	double n, decimal;
	cin >> n;
	integer = int(n);
	decimal = n - integer;

	while ((n - int(n)) != 0)
	{
		n = n * 10;
		counter = counter + 1;
	}
	cout << integer << endl << abs(decimal*pow(10, counter));
	return 0;
}