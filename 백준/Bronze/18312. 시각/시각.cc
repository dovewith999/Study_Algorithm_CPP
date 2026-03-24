#include <iostream>

bool ThreeIncludeNum(int Num, int FindNum)
{
	int Num1 = Num / 10;
	int Num2 = Num % 10;

	if (FindNum == Num1 || FindNum == Num2)
	{
		return true;
	}

	else
	{
		return false;
	}
}

int main()
{
	int Time = 0;
	int Count = 0;
	int FindNum = 0;;

	std::cin >> Time;
	std::cin >> FindNum;

	if (23 < Time || 0 > Time)
	{
		return -1;
	}

	for (int i = 0; i <= Time; ++i)
	{
		if (ThreeIncludeNum(i, FindNum))
		{
			Count += 3600;
			continue;
		}

		for (int j = 0; j < 60; ++j)
		{
			if (ThreeIncludeNum(j, FindNum))
			{
				Count += 60;
				continue;
			}

			for (int k = 0; k < 60; ++k)
			{
				if (ThreeIncludeNum(k, FindNum))
				{
					++Count;
				}
			}
		}
	}

	std::cout << Count << std::endl;

	return 0;
}