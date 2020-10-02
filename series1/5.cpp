/*for odd n quantities the formula is (n+1)/2
for even n quantities the formula is n/2*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if ((n % 2) == 1) { cout << (n + 1) / 2; }
	else if ((n % 2 == 0)) { cout << n / 2; };
	return 0;
}