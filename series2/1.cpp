#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x;
	
	cin >> x;
	for (int i =1; i <= x; i++) 
	{
		double k = (sqrt(i) - floor(sqrt(i)));
		bool sqr_num = false;
		for (;;)
		{
			if (k == 0)
			{
				sqr_num = true; 
			}
			break;
		}
		if (sqr_num)
			cout << i << " ";
	}
	return 0;
}