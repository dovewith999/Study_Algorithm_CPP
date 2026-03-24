#include <iostream>

int main()
{
	int N;

	std::cin >> N;

	if (0 != N % 4)
	{
		return 0;
	}

	else if (N < 4 || N > 1000)
	{
		return 0;
	}

	else
	{

		N /= 4;

		for (int i = 0; i < N; ++i)
		{
			std::cout << "long" << " ";
		}

		std::cout << "int" << std::endl;
	}

	return 0;

}