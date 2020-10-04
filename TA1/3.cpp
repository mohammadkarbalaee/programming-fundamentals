#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float xa, xb, ya, yb;
	cin >> xa >> ya;
	cin >> xb >> yb;
	float dis = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
		cout << dis;
	return 0;
}
