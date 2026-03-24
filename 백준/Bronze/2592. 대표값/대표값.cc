#include <iostream>

int main()
{	
	int numArr[10];
	
	int sum = 0;

	int num;

	for (int i = 0; i < 10; ++i)
	{
		std::cin >> num;

		if (num > 1000 || 0 != num % 10)
		{
			return 0;
		}

		numArr[i] = num;

		sum += num;
	}

	int count = 0;
	int countNum = 0;

	for (int i = 0; i < 10; ++i)
	{
		int curcount = 0;

		for (int j = 0; j < 10; ++j)
		{	
			if (numArr[i] == numArr[j])
			{
				++curcount;
			}	 
		}

		if (count < curcount)
		{
			count = curcount;

			countNum = numArr[i];
		}
	}

	int Avg = sum / 10;

	std::cout << Avg << std::endl <<  countNum << std::endl;

	return 0;
}