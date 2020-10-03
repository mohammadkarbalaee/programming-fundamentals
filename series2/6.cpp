#include<iostream>
using namespace std;
int main()
{
	long long n, m, multiple;
	cin >> n >> m;
	for (int j=1; j <= n; j++)
	{
		for (int i=1;i<=m;i++)
		{
			multiple = j * i;
			cout << multiple << "\t";
		}
		cout << "\n";
	}

	return 0;
}
