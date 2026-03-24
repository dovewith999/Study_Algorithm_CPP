#include <iostream>

int main()
{
	int N = 0, M = 0;

	std::cin >> N >> M;

	N = N / 100 * 100;

	for (int i = 0; i < 100; ++i)
	{
		int Temp = N + i;

		if (Temp % M == 0)
		{
			if (i < 10)
			{
				std::cout << "0";
			}

			std::cout << i << std::endl; 
			break;
		}
	}

	return 0;
}