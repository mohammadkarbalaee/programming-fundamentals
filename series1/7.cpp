#include <iostream>
using namespace std;
int main()
{
	/*first modify the variables you wanna get as input and wanna give as output*/
    int names_p_day;
	int day1_names, day2_names, day3_names;
	int day1_turn, day2_turn, day3_turn;
	int day1_leftnames, day2_leftnames;
	/*get the input from user*/
	cin >> names_p_day;
	cin >> day1_names >> day2_names >> day3_names;
	/* here we calculate the namber of names which are left in an incomplete page from the previous day*/
	day1_leftnames = day1_names % names_p_day;
	day2_leftnames = (day2_names + day1_names) % names_p_day;
	/*here we add up the number of names in a day to the number of left names in the current page from the previous day then we divide the sum to the number of names per day with integral division this gives the quantity of page turnings in that day*/
	day1_turn = day1_names / names_p_day;
	day2_turn = (day2_names+ day1_leftnames) / names_p_day;
	day3_turn = (day3_names + day2_leftnames) / names_p_day;
	/*here we give the output*/
	cout << day1_turn << "  " << day2_turn << "  " << day3_turn << endl;
	return 0;
}