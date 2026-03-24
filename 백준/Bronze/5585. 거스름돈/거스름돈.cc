#include <iostream>

const int NUM_OF_COIN = 6;

int Coin[NUM_OF_COIN] = {500, 100, 50, 10, 5, 1};

int Calc(int num)
{
	int countOfCoin = 0;

	for (int i = 0;i < NUM_OF_COIN;)
	{
		if (num >= Coin[i])
		{
			++countOfCoin;
			num -= Coin[i];
		}
		else
		{
			++i;
		}

		continue;
	}

	return countOfCoin;
}

int main()
{
	int num = 0;
	std::cin >> num;

	std::cout << Calc(1000 - num) << std::endl;

	return 0;
}