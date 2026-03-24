#include <iostream>
#include <string>
#include <vector>

int main()
{

	std::string input;
	std::vector<int> nums;

	while (std::getline(std::cin, input))  
	{
		if (input.empty())   
			break;  
		
		int num = std::stoi(input);
		nums.emplace_back(num);
	}

	std::vector<int> results;
	int  num = 0;

	for (int i = 0, j = 0; ; )
	{
		num = num * 10 + 1;
		num %= nums[i];
		++j;

		if (num % nums[i] == 0)
		{
			results.emplace_back(j);

			if (nums.size() <= i + 1)
				break;

			++i;
			j = 0;
			num = 0;
		}

	}
	
	for(int i = 0; i < results.size(); ++i)
	{
		std::cout << results[i] << std::endl;
	}

	return 0;
}