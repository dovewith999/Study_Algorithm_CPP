#include <iostream>

int Factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}

	int result = num * Factorial(num - 1);

	return result;
}

int main()
{
	int num = 0;
	std::cin >> num;

	std::cout << Factorial(num) << std::endl;

	return 0;
}