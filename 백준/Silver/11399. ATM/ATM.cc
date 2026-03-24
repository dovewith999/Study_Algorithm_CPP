#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int numOfPeople = 0;
	std::cin >> numOfPeople;

	std::vector<int> times;

	for (int i = 0; i < numOfPeople; ++i)
	{
		int numOfTime = 0;
		std::cin >> numOfTime;
		times.emplace_back(numOfTime);
	}

	std::sort(times.begin(), times.end());

	int result = 0;

	for (int i = 0; i < numOfPeople; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			result += times[j];
		}
	}

	std::cout << result << std::endl;
	return 0;
}