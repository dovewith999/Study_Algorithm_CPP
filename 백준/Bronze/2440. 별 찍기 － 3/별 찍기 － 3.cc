#include <iostream>

int main()
{	
	int InputNum = 0;
	std::cin >> InputNum;
	
	for (int i = InputNum; i > 0; --i)
	{
		for ( int j = 0; j < i; ++j)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}

	return 0;
}