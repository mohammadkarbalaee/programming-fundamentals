#include <iostream>

using namespace std;

int main()
{
	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		for (int j = i; j < input; j++)
		{
			int k = input - (i + j);

				if (i + j <= k) 
				{
					continue;
				}
				if (k * k == i * i + j * j) 
				{
					cout << i << " " << j << " " << k;
					return 0;
				}
		}
	}
	cout << "Impossible";

	return 0;
}