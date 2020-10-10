#include<iostream>
using namespace std;
int main()
{
	int a, factorial;
	factorial = 1;
	cin >> a;
	while (a > 0)
	{
		factorial = factorial * a;
		a--;
	}
	cout << factorial;
	return 0;
}