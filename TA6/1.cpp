#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int ** arr;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	//-----------------------------------------------
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	//-----------------------------------------------
	int x, y, end;
	cin >> x >> y;
	end = arr[x - 1][y - 1];
	cout << end;
	//-------------------------------------------
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}