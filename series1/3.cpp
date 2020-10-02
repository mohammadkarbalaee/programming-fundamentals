#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	double icpp, ijava, iinflation;
	cin >> icpp >> ijava >> iinflation;
	double sjava = 50 * ijava * ((iinflation/100)+1);
	double scpp = 150 * icpp *((iinflation / 100)+1);
	double total = scpp + sjava;
	cout << fixed << setprecision(2) << total;
	return 0;
}