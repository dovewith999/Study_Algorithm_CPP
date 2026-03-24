#include <iostream>

int main()
{
	int N;

	int s;

	std::cin >> N;

	s = N;

	for (int i = 0; i < s; ++i)
	{
		for (int j = 0; j < N - 1; ++j)
		{
			std::cout << " ";
		}

		for (int k = 0; k <= s - N; ++k)
		{
			std::cout << "*";
		}

		--N;

		std::cout << std::endl;
	}

	return 0;

}