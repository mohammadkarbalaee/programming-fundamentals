#include<iostream>
#include<cmath>
using namespace std;
//-------------------------------------
int DigitsSum(int);
int Sum(int,int);
int Multiply(int,int);
int Power(int,int);
//-----------------------------------
int main()
{
    int n,FirstNum[100],SecondNum[100];
    char OperationSign[100];
    cin >> n;
    for(int i = 0;n > i;i++)
    {
        cin >> FirstNum[i] >> OperationSign[i] >> SecondNum[i];
    }
    for(int i = 0;n > i;i++)
    {
        if(OperationSign[i] == '+')
        {
           cout << Sum(FirstNum[i],SecondNum[i]) << endl;
        }
        else if(OperationSign[i] == '*')
        {
          cout << Multiply(FirstNum[i],SecondNum[i]) << endl;
        }
        else if(OperationSign[i] == '^')
        {
            cout << Power(FirstNum[i],SecondNum[i]) << endl;
        }
    }
    return 0;
}
//--------------------------------------------------------
int DigitsSum(int number)
{
    int sum = 0;
    while(true)
    {
    if(number == 0) {break;}
    sum = sum + number % 10;
    number = number / 10;
    }
    return sum;
}
//----------------------------------------
int Sum(int num1,int num2)
{
    int sum = DigitsSum(num1) + DigitsSum(num2);
    return sum;
}
//-------------------------------------------------
int Multiply(int num1,int num2)
{
    int multiply = 0;
    for(int i = 1; i<=num2;i++)
    {
        multiply = multiply + DigitsSum(num1);
        if(multiply>=10 && i!=num2)
        {
            multiply = DigitsSum(multiply);
        }
    }
    return multiply;
}
//-----------------------------------------------
int Power(int num1,int num2)
{
    int pow = Multiply(num1,num1);
    for(int i = 1;i < num2-1;i++)
    {
       pow = Multiply(pow,num1);
    }
    return pow;
}
//--------------------------------------------