#include <iostream>

int main()
{
	unsigned int num = 0;
	std::cin >> num;

	unsigned int count = 0;

	for (int i = 1; i <= num; ++i)
	{
		if (num == 0)
			break;

		if (num - i >= 0)
		{
			num -= i;
			++count;
		}
	}

	std::cout << count << std::endl;
	return 0;
}