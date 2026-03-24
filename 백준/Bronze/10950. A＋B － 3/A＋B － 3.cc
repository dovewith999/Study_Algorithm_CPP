#include <iostream>
#include <vector>

int main()
{
	int iLoopCount;

	std::cin >> iLoopCount;

	typedef std::vector<int> VECTOR;

	VECTOR vecA;
	VECTOR vecB;

	int a, b;

	for (int i = 0; i < iLoopCount; ++i)
	{
		std::cin >> a >> b;

		vecA.emplace_back(a);
		vecB.emplace_back(b);
	}

	for (int i = 0; i < iLoopCount; ++i)
	{
		std::cout << vecA[i] + vecB[i] << std::endl;
	}
    
    return 0;
}