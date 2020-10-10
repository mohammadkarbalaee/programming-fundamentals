#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x;
	cin >> y;
	for (int i = x; i <= y; i++) {
		bool prime = true;
		for (int j = 2; j < i / 2 + 1; j++)
		{
			if (i%j == 0) {
				prime = false; break;
			}
		}
		if (prime && i != 1)
			cout << i << endl;
	}
	return 0;
}