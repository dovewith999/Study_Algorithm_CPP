#include <iostream>
#include <vector>

int main()
{
	int k = 0;

	std::cin >> k;

	std::vector<int> numList;

	for (int i = 0; i < k; ++i)
	{
		int intiger = 0;
		std::cin >> intiger;

		if (intiger == 0)
			numList.pop_back();
		
		else
			numList.emplace_back(intiger);
	}

	int sum = 0;

	for (auto num : numList)
		sum += num;

	std::cout << sum << std::endl;

	return 0;
}