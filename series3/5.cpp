#include <iostream>
#include<string>
using namespace std;

bool isPrime(int input_num)
{
	int rem;
	bool isPrime = true;

	for (int test_divisor = 2; test_divisor < input_num; test_divisor++)
	{
		rem = input_num % test_divisor;

		if (rem == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int main() 
{
	int input, factor = 2, temp;
	string output, str_factor, str_pow, end;
	cin >> input;

	temp = input;
	bool starSign = true, prime_check;
	prime_check = isPrime(input);

	if (prime_check)
	{
		cout << input;
	}
	else
	{
		for (; factor < input; factor++)
		{
			int powCount = 0;
			while (temp % factor == 0)
			{
				temp /= factor;
				powCount++;
			}
			if (powCount > 0)
			{
				if (!starSign)
				{
					output = output + "*";
				}
			}
			str_factor = to_string(factor);
			str_pow = to_string(powCount);

			if (powCount == 1)
			{
				output = output + str_factor;
			}
			if (powCount > 1)
			{
				output = output + str_factor + "^" + str_pow;
			}
			starSign = false;
		}
		cout << output;
	}
	return 0;
}