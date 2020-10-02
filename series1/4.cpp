#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int xa, xb, xc, ya, yb, yc;
	double AB, AC, BC,total;
	cin >> xa >> ya;
	cin >> xb >> yb;
	cin >> xc >> yc;
	 AB = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
     BC = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
     AC = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
	 total = ceil(AB + AC + BC);
	cout << total;
	return 0;
}