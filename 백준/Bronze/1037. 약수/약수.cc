#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> measures;

int CalcDrainage()
{
	if (measures.size() == 1)
		return measures[0] * measures[0];

	int result = 0;

	sort(measures.begin(), measures.end());

	result = measures[0] * measures[measures.size() - 1];

	return result;
}

int main()
{
	int num = 0;
	std::cin >> num;

	for (int i = 0; i < num; ++i)
	{
		int measure = 0;
		std::cin >> measure;

		measures.emplace_back(measure);
	}

	std::cout << CalcDrainage() << std::endl;

	return 0;
}