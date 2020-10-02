#include<iostream>
using namespace std;
int main()
{
	int bottle1, bottle2, bottle3;
	cin >> bottle1 >> bottle2 >> bottle3;
	double numerator = bottle1 + bottle2 + bottle3;
	double total = numerator /3;
	cout << total;
	return 0;
}