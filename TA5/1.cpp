#include<iostream>
using namespace std;

int main()
{
	int Arr2D1[2][2];
	int Arr2D2[2][2];

	cin >> Arr2D1[0][0] >> Arr2D1[0][1];
	cin >> Arr2D1[1][0] >> Arr2D1[1][1];
	cin >> Arr2D2[0][0] >> Arr2D2[0][1];
	cin >> Arr2D2[1][0] >> Arr2D2[1][1];

	int Final11 = Arr2D1[0][0] * Arr2D2[0][0] + Arr2D1[0][1] * Arr2D2[1][0];
	int Final12 = Arr2D1[0][0] * Arr2D2[0][1] + Arr2D1[0][1] * Arr2D2[1][1];
	int Final21 = Arr2D1[1][0] * Arr2D2[0][0] + Arr2D1[1][1] * Arr2D2[1][0];
	int Final22 = Arr2D1[1][0] * Arr2D2[0][1] + Arr2D1[1][1] * Arr2D2[1][1];

	cout << Final11 << " " << Final12 << endl;
	cout << Final21 << " " << Final22 << endl;
	return 0;
}