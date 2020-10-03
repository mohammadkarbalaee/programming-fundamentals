#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int y,x, Min = 100000, Max = -100000;

	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		cin >> y;

		if (y > Max)
		{
			Max = y;
		}

	    if (y < Min)
		{
			Min = y;
		}

	}
	cout << Min << " " << Max;


	return 0;
}