#include <iostream>
#include <vector>

int main()
{
	int iTotalPrice;
	int iTotalType;

	std::cin >> iTotalPrice;

	std::cin >> iTotalType;

	typedef std::vector<int> VECTOR;

	VECTOR vecPrice;
	VECTOR vecNum;

	int a, b;

	for (int i = 0; i < iTotalType; ++i)
	{
		std::cin >> a >> b;

		vecPrice.emplace_back(a);
		vecNum.emplace_back(b);
	}

	int c = 0;

	for (int i = 0; i < iTotalType; ++i)
	{
		c += vecPrice[i] * vecNum[i];
	}

	if (iTotalPrice == c)
	{
		std::cout << "Yes";
	}

	else
	{
		std::cout << "No";
	}

	return 0;

}