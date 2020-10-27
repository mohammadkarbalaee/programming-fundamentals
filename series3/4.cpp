#include <iostream>
using namespace std;

int main()
{
	int n, k, current_num = 0, round = 0;
	cin >> n >> k;

	while (current_num != 1)
	{
		current_num += k;

		if (round == 0)
		{
			++current_num;
		}
		if (current_num > n)
		{
			current_num -= n;
		}

		++round;
	}

	cout << round;

	return 0;
}