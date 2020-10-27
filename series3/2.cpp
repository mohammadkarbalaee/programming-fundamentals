#include<iostream>

using namespace std;

int score(int initial_score, int trip_days)
{
	int final_score;
	if (trip_days == 0)
	{
		final_score = 20;
	}
	else if (trip_days == 7)
	{
		final_score = initial_score;
	}
	else
	{
		for (int i = 1; i <= trip_days && initial_score>0; i++)
		{
			initial_score=initial_score-1;
		}
		final_score = initial_score;
	}
	return final_score;
}

int main()
{
	int x, n, end;

	cin >> x;
	cin >> n;

	end = score(x, n);

	cout << end;

	return 0;
}