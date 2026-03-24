#include <iostream>

int main()
{
	int TotalNum = 0;
	std::cin >> TotalNum;

	bool bWinnerIsSk = false;

	while (true)
	{
		if (TotalNum <= 0)
			break;

		if (bWinnerIsSk)
			bWinnerIsSk = false;
		else
			bWinnerIsSk = true;

		if (TotalNum >= 4)
		{
			TotalNum -= 3;
		}

		else
		{
			TotalNum -= 1;
		}

	}

	if (bWinnerIsSk)
		std::cout << "SK" << std::endl;

	else
		std::cout << "CY" << std::endl;

	return 0;
}