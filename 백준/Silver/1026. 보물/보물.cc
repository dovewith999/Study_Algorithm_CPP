#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int numOfElement = 0;
	std::cin >> numOfElement;
	
	std::vector<int> A;
	std::vector<int> B;

	for (int i = 0; i < numOfElement; ++i)
	{
		int num = 0;
		std::cin >> num;
		A.emplace_back(num);
	}

	for (int i = 0; i < numOfElement; ++i)
	{
		int num = 0;
		std::cin >> num;
		B.emplace_back(num);
	}

	std::sort(A.begin(), A.end());
	std::sort(B.begin(), B.end(), [](int a, int b) {
		return a > b; 
		});

	int sum = 0;

	for (int i = 0; i < numOfElement; ++i)
	{
		sum += A[i] * B[i];
	}

	std::cout << sum << std::endl;

	return 0;
}