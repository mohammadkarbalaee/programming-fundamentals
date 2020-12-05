#include<iostream>
using namespace std;
//----------------------
int main()
{
	int Input, n, edge = 0;
	cin >> n;
	int arr[100000] = { 0 };
	//-------------------------------------
	for (int j = 0; j < n; j++)
	{
		cin >> Input;
		arr[Input]++;
	}
	//---------------------------------
	for (int k = 0; k < 100000; k++)
	{
		edge = edge + arr[k] * arr[k + 1];
	}
	//---------------------------------
	cout << edge;
	return 0;
}