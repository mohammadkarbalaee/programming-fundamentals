#include<iostream>
using namespace std;
//------------------------------
int main()
{
	int i = 0, j = 0, k = 0, arr1[100], arr2[100],sorted[200], m, n;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}
	//--------------------------------------
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			sorted[k] = arr1[i];
			i++;
			k++;
		}
		else
		{
			sorted[k] = arr2[j];
			j++;
			k++;
		}
	}
	//---------------------------------
	while (i < n)
	{
		sorted[k++] = arr1[i++];
	}
	while (j < m)
	{
		sorted[k++] = arr2[j++];
	}
	//----------------------------------
	for (int i = 0; i < m + n; i++)
	{
		cout << sorted[i] << " ";
	}
	//----------------------------------
	return 0;
}