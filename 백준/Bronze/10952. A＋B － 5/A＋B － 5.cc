#include <iostream>
#include <vector>

int main()
{
	int a = 0, b = 0;

	typedef std::vector<int> VECTOR_INT;

	VECTOR_INT vecAValues;
	VECTOR_INT vecBValues;

	do 
	{
		std::cin >> a >> b;

		vecAValues.emplace_back(a);
		vecBValues.emplace_back(b);

	} while (0 != a && 0 != b);

	for (int i = 0; i < vecAValues.size() - 1; ++i)
	{
		std::cout << vecAValues[i] + vecBValues[i] << std::endl;
	}

	return 0;

}