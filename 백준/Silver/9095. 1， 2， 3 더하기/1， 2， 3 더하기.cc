#include <iostream>

int memo[11] = {0,};
int inputNums[11] = {0, };

int CalculateSum(int num)
{
	if (num < 0)
		return 0;

	if (memo[num] != 0)
	{
		return memo[num];
	}
	
	memo[num] = CalculateSum(num - 1) + CalculateSum(num - 2) + CalculateSum(num - 3);

	return memo[num];
}

int main()
{
	int numOfTestCase = 0;

	std::cin >> numOfTestCase;

	for (int i = 0; i < numOfTestCase; ++i)
	{
		int nunOfInput = 0;
		std::cin >> nunOfInput;
		inputNums[i] = nunOfInput;
	}

	memo[0] = 1;
	memo[1] = 2;
	memo[2] = 4;

	for (int i = 0; i < numOfTestCase; ++i)
	{
		std::cout << CalculateSum(inputNums[i] - 1) << std::endl;
	}

	return 0;
}