#include <iostream>
#include <vector>

int main()
{
	int k = 0;
	std::cin >> k;

	int count = 0;
	if (k < 100)
	{
		std::cout << k << std::endl;
		return 0;
	}

	count += 99;

	for (int i = 100; i <= k; ++i)
	{
		int num1 = i / 100;
		int num10 = (i % 100) / 10;
		int num100 = (i % 100) % 10;

		if (num1 - num10 == num10 - num100)
		{
			++count;
		}
	}

	std::cout << count << std::endl;

	return 0;
}