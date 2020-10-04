#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned int num,sum=0,rem;
	cin >> num;
	while (num > 0) { rem = num % 10;
	sum = sum + rem;
	num = num / 10;
	}
	cout << sum;
	return 0;
}