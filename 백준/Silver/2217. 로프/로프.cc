#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int numOfLoop = 0;
	std::cin >> numOfLoop;

	std::vector<int> loops;

	for (int i = 0; i < numOfLoop; ++i)
	{
		int num = 0;
		std::cin >> num;

		loops.emplace_back(num);
	}

	std::sort(loops.begin(), loops.end());

	int result = loops[0] * numOfLoop;

	for (int i = 0; i < numOfLoop; ++i)
	{
		if (result < loops[i] * (numOfLoop - i))
		{
			result = loops[i] * (numOfLoop - i);
		}
	}

	std::cout << result << std::endl;

	return 0;
}