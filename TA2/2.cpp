#include <iostream>
using namespace std;

int main()
{
	int n, t1 = 0, t2 = 1, i = 2, next;
	cin >> n;
	if (n == 1) {
		cout << t1;
	}
	else if (n == 2) {
		cout << t2;
	}
	else {
		while(i<n)
		{
			next = t1 + t2;
			t1 = t2;
			t2 = next;
			i = i + 1;
		}
		cout << next;
	}
	return 0;
}