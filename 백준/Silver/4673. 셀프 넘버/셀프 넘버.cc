#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int numOfOne = 0;
	int numOfTen = 0;
	int numOfHun = 0;
	int numOfTha = 0;
	int numOfTenTha = 0;

	std::vector<int> selfNums;

	for (int i = 1; i <= 10000; ++i)
	{
		numOfOne = 0;
		numOfTen = 0;
		numOfHun = 0;
		numOfTha = 0;
		numOfTenTha = 0;

		if (i == 10000)
			numOfTenTha = 1;

		else
		{
			if (i >= 1000)
				numOfTha = i / 1000;

			if (i >= 100)
				numOfHun = (i - (numOfTha * 1000)) / 100;

			if (i >= 10)
				numOfTen = (i - (numOfTha * 1000) - (numOfHun * 100)) / 10;

			numOfOne = (i - (numOfTha * 1000) - (numOfHun * 100) - (numOfTen * 10)) / 1;
		}

		int result = i + numOfTenTha + numOfTha + numOfHun + numOfTen + numOfOne;
		selfNums.emplace_back(result);
	}

	for (int i = 1; i <= 10000; ++i)
	{
		if (std::find(selfNums.begin(), selfNums.end(), i) == selfNums.end())
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}