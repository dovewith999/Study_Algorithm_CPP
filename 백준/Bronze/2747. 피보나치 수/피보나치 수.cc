#include <iostream>

int Fibonacci[46] = { 0 , };

int CalcFibonacci(int num)
{
	if(Fibonacci[num] != 0)
		return Fibonacci[num];

	if (num == 1)
	{
		Fibonacci[1] = 1;
		return Fibonacci[1];
	}
	
	if (num == 0)
	{
		Fibonacci[0] = 0;
			return Fibonacci[0];
	}

	Fibonacci[num] = CalcFibonacci(num - 1) + CalcFibonacci(num - 2);

	return Fibonacci[num];
}

int main()
{
	int num = 0;
	std::cin >> num;

	std::cout << CalcFibonacci(num) << std::endl;

	return 0;
}