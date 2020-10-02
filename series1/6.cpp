#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int trick = abs(a % 2) + abs(b % 2) + abs(c % 2);
	int even = 3 - trick;
	int odd = 3 - even;
	cout << odd << endl;
	cout << even;
	return 0;
}