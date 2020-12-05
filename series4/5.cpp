#include<iostream>
using namespace std;
//------------------------
void Farzad(int arr[], int arraySize)
{
	int MAX = 0, max = 0;
	for (int i = 0; i < arraySize; i++)
	{
		max = max + arr[i];
		if (max < 0)
		{
			max = 0;
		}
		if (MAX < max)
		{
			MAX = max;
		}
	}
	cout << MAX;
}
int main()
{
	int Quantity, max = 0, sum = 0;
	int* profitArray;
	cin >> Quantity;
	profitArray = new int[Quantity];
	for (int i = 0; i < Quantity; i++)
	{
		cin >> profitArray[i];
	}
	//--------------------------------------------
	Farzad(profitArray, Quantity);
	//--------------------------------------------
	delete[] profitArray;
	return 0;
}
