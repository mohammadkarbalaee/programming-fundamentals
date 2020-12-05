#include<iostream>
#include<cmath>
using namespace std;
//--------------------------
void Merge(int ArrayOfNumbers[], int start, int middle, int end)
{
	int x = middle - start + 1;
	int y = end - middle;
	int* Left;
	int* Right;
	Left = new int[x];
	Right = new int[y];
	//--------------------------------------------------
	for (int i = 0; i < x; i++)
	{
		Left[i] = ArrayOfNumbers[start + i];
	}
	for (int j = 0; j < y; j++)
	{
		Right[j] = ArrayOfNumbers[middle + j + 1];
	}
	//----------------------------------------------------------------
	int i = 0, j = 0, k = start;
	//------------------------------------------------------
	while (i < x && j < y)
	{
		if (Left[i] <= Right[j])
		{
			ArrayOfNumbers[k] = Left[i];
			i++;
		}
		else
		{
			ArrayOfNumbers[k] = Right[j];
			j++;
		}
		k++;
	}
	//---------------------------------------------------
	while (i < x)
	{
		ArrayOfNumbers[k] = Left[i];
		i++;
		k++;
	}
	while (j < y)
	{
		ArrayOfNumbers[k] = Right[j];
		j++;
		k++;
	}
	delete[] Right;
	delete[] Left;
}
//-----------------------------------------------------------------
void MergeSort(int ArrayOfNumbers[], int start, int end)
{
	if (start < end)
	{
		int middle = floor((start + end) / 2.0);
		//---------------------------------------
		MergeSort(ArrayOfNumbers, start, middle);
		MergeSort(ArrayOfNumbers, middle + 1, end);
		Merge(ArrayOfNumbers, start, middle, end);
	}
}
//------------------------------------------
int main()
{
	int QuantityOfNumbers;
	int* ArrayOfNumbers;
	cin >> QuantityOfNumbers;
	ArrayOfNumbers = new int[QuantityOfNumbers];
	for (int i = 0; i < QuantityOfNumbers; i++)
	{
		cin >> ArrayOfNumbers[i];
	}

	//-------------------------------------------
	MergeSort(ArrayOfNumbers, 0, QuantityOfNumbers - 1);
	//-----------------------------------------
	for (int i = 0; i < QuantityOfNumbers; i++)
	{
		cout << ArrayOfNumbers[i] << " ";
	}
	delete[] ArrayOfNumbers;
	return 0;
}