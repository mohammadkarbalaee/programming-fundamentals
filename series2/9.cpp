#include<iostream>
using namespace std;
int main()
{
	int k, i = 1, count = 0, good_num, rem;
	cin >> k;
	while (true)
	{   
		good_num = (i*(i + 1)) / 2;
		i = i + 1;
		for (int j = 1;j<=good_num;j++)
		{
			 
			
			rem = good_num % j;
			if (rem == 0)
			{
				count = count + 1;
			}
		}
		if (count >= k)
		{
			cout << good_num;
			break;
		}
		count = 0;
	
	}

	return 0;
}