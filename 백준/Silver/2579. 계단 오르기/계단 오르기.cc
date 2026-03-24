#include <iostream>
#include <vector>

std::vector<int> memo;
std::vector<int> inputNums;


int main()
{
	int numOfTestCase = 0;

	std::cin >> numOfTestCase;

	for (int i = 0; i < numOfTestCase; ++i)
	{
		int nunOfInput = 0;
		std::cin >> nunOfInput;
		inputNums.emplace_back(nunOfInput);
	}

	memo.assign(inputNums.size(), 0);

	memo[0] = inputNums[0];
	memo[1] = inputNums[0] + inputNums[1];
	memo[2] = std::max(inputNums[0] + inputNums[2], inputNums[1] + inputNums[2]);

	for (int i = 3; i < numOfTestCase; ++i)
	{
		memo[i] = std::max(memo[i - 2] + inputNums[i], memo[i - 3] + inputNums[i - 1] + inputNums[i]);
	}
	 
	std::cout << memo.back() << std::endl;

	return 0;
}