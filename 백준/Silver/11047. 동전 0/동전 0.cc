#include <iostream>
#include <vector>

int main()
{
	int NumOfValue = 0;
	int Price;

	std::cin >> NumOfValue;
	std::cin >> Price;

	std::vector<int> ValueList;

	for (int i = 0; i < NumOfValue; ++i)
	{
		int Value;
		std::cin >> Value;
		ValueList.push_back(Value);
	}

	int NumOfCoin = 0;

	for (int i = NumOfValue - 1; i >= 0; --i)
	{
		if (ValueList[i] > Price)
		{
			continue;
		}

		else
		{
			NumOfCoin +=  Price / ValueList[i];

			Price %= ValueList[i];
		}
	}

	std::cout << NumOfCoin;

	return 0;
}