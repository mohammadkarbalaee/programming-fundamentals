#include<iostream>
using namespace std;
//---------------------------------------------------------------------------------
int Partition(int arr[], int start, int end)
{
	int pivot = arr[end];
	int pivotIndex = start;
	
	for (int i = start; i < end; i++)
	{
		if (arr[i] < pivot)
		{
			int temporary = arr[i];
			arr[i] = arr[pivotIndex];
			arr[pivotIndex] = temporary;
			pivotIndex++;
		}
	}
	int temporary = arr[end];
	arr[end] = arr[pivotIndex];
	arr[pivotIndex] = temporary;

	return pivotIndex;

}
//---------------------------------------------------------------------------------
void Quicksort(int arr[], int start, int end)
{
	if (start < end)
	{
		int n = Partition(arr, start, end);
		Quicksort(arr, start, (n - 1));
		Quicksort(arr, (n + 1), end);
	}
}
//------------------------------------------------------------------------------------
int main()
{
	int NumbersArray[500000], QuantityOfNumbers = 0, i = 0;
	//----------------------------------------------------
	while (cin >> NumbersArray[i])
	{
		i++;
		QuantityOfNumbers++;
	}
	//----------------------------------------------------------------
	Quicksort(NumbersArray, 0, QuantityOfNumbers - 1);
	//---------------------------------------------------------------------
	for (int i = 0; i < QuantityOfNumbers; i++)
	{
		cout << NumbersArray[i] << " ";
	}
	//--------------------------------------------------------------------------
	return 0;
}