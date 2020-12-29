#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//-----------------------------------------
string sumOfBigNums(string, string);
string multiplictionOfBigNums(string, string);
string Equalizer(string ,int);
int A_fix(char);
//-------------------------------------------------------
int main()
{
   string first_num, second_num;
   cin >> first_num;
   cin >> second_num;
   cout << sumOfBigNums(first_num, second_num) << endl;
   cout << multiplictionOfBigNums(first_num, second_num) << endl;
    return 0;
}
//-----------------------------------------------------------------------
int A_fix(char Digit)
{
   if(Digit == 65){return 10;}
   else{return Digit - '0';}
   return 0;
}
//------------------------------------------
char IntegerToChar(int number)
{
 if(number == 10) {return 'A';}
 else {return char(number + 48);}
}
//------------------------------------------------------------------------
string Equalizer(string String,int LengthDifference)
{
    string Zero = "0";
    for(int i = LengthDifference;i > 0; i--){String = Zero + String;}
    return String;
}
//------------------------------------------------------------------------
string sumOfBigNums(string FirstString,string SecondString)
{
    string Answer = "";
    string A = "A";
    int Adjunct = 0;
    int Digit1 = 0;
    int Digit2 = 0;
    int Length1 = FirstString.length();
    int Length2 = SecondString.length();
    int LengthDifference = abs(Length2 - Length1);
    if(Length2 > Length1)
    {
        FirstString = Equalizer(FirstString,LengthDifference);
        for(int i = Length2 - 1; i >= 0;i--)
        {
            Digit1 = A_fix(FirstString[i]);
            Digit2 = A_fix(SecondString[i]);
            int ToAdd = (Digit1 + Digit2 + Adjunct) % 11;
            Adjunct = (Digit1 + Digit2 + Adjunct) / 11;
            if(ToAdd < 10) {Answer.insert(0,to_string(ToAdd));} else if(ToAdd == 10) {Answer.insert(0,A);}
        }
        if(Adjunct > 0) {string AdjunctStringed = to_string(Adjunct);Answer = AdjunctStringed + Answer;}
        return Answer;
    }
    else if(Length2 < Length1)
    {
        SecondString = Equalizer(SecondString,LengthDifference);
        for(int i = Length1 - 1; i >= 0;i--)
        {
            Digit1 = A_fix(FirstString[i]);
            Digit2 = A_fix(SecondString[i]);
            int ToAdd = (Digit1 + Digit2 + Adjunct) % 11;
            Adjunct = (Digit1 + Digit2 + Adjunct) / 11;
            if(ToAdd < 10) {Answer.insert(0,to_string(ToAdd));} else if(ToAdd == 10) {Answer.insert(0,A);}
        }
        if(Adjunct > 0) {string AdjunctStringed = to_string(Adjunct);Answer = AdjunctStringed + Answer;}
        return Answer;
    }
    else if(Length1 == Length2)
    {
        for(int i = Length1 - 1; i >= 0;i--)
        {
            Digit1 = A_fix(FirstString[i]);
            Digit2 = A_fix(SecondString[i]);
            int ToAdd = (Digit1 + Digit2 + Adjunct) % 11;
            Adjunct = (Digit1 + Digit2 + Adjunct) / 11;
            if(ToAdd < 10) {Answer.insert(0,to_string(ToAdd));} else if(ToAdd == 10) {Answer.insert(0,A);}
        }
        if(Adjunct > 0) {string AdjunctStringed = to_string(Adjunct);Answer = AdjunctStringed + Answer;}
        return Answer;
    }
    return "";
}
//------------------------------------------------------------------------------------------------------------------
string multiplictionOfBigNums(string FirstString,string SecondString)
{
   int Length1 = FirstString.length();
   int Length2 = SecondString.length();
   int n = 0;
   int m =max(Length1,Length2);
   string SumMul[m];
   for(int i = 0;i < m;i++) {SumMul[i]="";}
   string Answer="";
   for(int i = Length1-1;i >= 0;i--)
   {
      int Adjunct = 0;
      for(int j = Length2-1;j >= 0;j--)
      {
      SumMul[i] = IntegerToChar((A_fix(FirstString[i]) * A_fix(SecondString[j]) + Adjunct) % 11) + SumMul[i];
      Adjunct = (A_fix(FirstString[i]) * A_fix(SecondString[j]) + Adjunct) / 11;
      }
      if(Adjunct != 0) {SumMul[i] = IntegerToChar(Adjunct) + SumMul[i];}
      for(int k = 0;k < n;k++) {SumMul[i] = SumMul[i] + '0';}
      n++;
   }
   for(int i = 0;i < m;i++) {Answer = sumOfBigNums(Answer,SumMul[i]);}
   //------------------------------------------------------
   return Answer;
}
//-----------------------------------------------------------------------