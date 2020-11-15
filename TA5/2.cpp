#include <iostream> 
#include <string> 
using namespace std;
//--------------------------------
int main()
{
	int quantity;
	cin >> quantity;
	string null;
	//----------------------------------
	getline(cin, null);
	//----------------------------------
	for (int i = 0; i < quantity; i++)
	{
		string filmName;
		getline(cin, filmName);
		//-------------------------------------------------
		if ((96 < filmName[0]) && (filmName[0] < 123))
		{
			char firstLetter = filmName[0] - 32;
			cout << firstLetter;
		}
	    if (64 < filmName[0] && filmName[0] < 91)
		{
			char firstLetter = filmName[0];
			cout << firstLetter;
		}
		if (filmName[0] < 65 || (filmName[0] > 90 && filmName[0] < 97) || (filmName[0]>122 && filmName[0] != 32))
		{
			cout << filmName[0];
		}
		//---------------------------------------------------------------
		for (int j = 1; j < filmName.size(); j++)
		{
			/*if (filmName[j] == 32)
			{
				cout << " ";
			}*/
			if (filmName[j] < 65 || (filmName[j] > 90 && filmName[j] < 97) || filmName[j]>122 && filmName[j]!=32)
			{
				cout << filmName[j];
			}
			if (96 < filmName[j] && filmName[j] < 123 && filmName[j - 1] ==32)
			{
				char Letter = filmName[j]-32;
				cout << Letter;
			}
			if (96 < filmName[j] && filmName[j] < 123 && filmName[j - 1] != 32)
			{
				char Letter = filmName[j];
				cout << Letter;
			}
		    if (64 < filmName[j] && filmName[j] < 91 && filmName[j - 1] == 32)
			{
				char Letter = filmName[j];
				cout << Letter;
			}
			if (64 < filmName[j] && filmName[j] < 91 && filmName[j - 1] != 32)
			{
				char Letter = filmName[j]+32;
				cout << Letter;
			}
		}
		cout << endl;
		continue;
	}
	//--------------------------------
	return 0;
}