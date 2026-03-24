#include <iostream>
#include <vector>

int middle = 0;

std::vector<std::pair<std::string, int>>titles;

void ComparePower(int startIndex, int endIndex, int power)
{
	if (startIndex > endIndex)
	{
		if (titles[middle].second < power)
		{
			std::cout << titles[middle + 1].first << '\n';
		}

		else
		{
			std::cout << titles[middle].first << '\n';
		}

		return;
	}

	middle = (startIndex + endIndex) / 2;

	if (titles[middle].second >= power)
	{
		ComparePower(startIndex, middle - 1, power);
	}

	else if (titles[middle].second < power)
	{
		ComparePower(middle + 1, endIndex, power);
	}
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int numOfTitle = 0;
	int numOfCharacter = 0;

	std::cin >> numOfTitle >> numOfCharacter;

	std::string title;
	int power;

	for (int i = 0; i < numOfTitle; ++i)
	{
		std::cin >> title >> power;

		titles.emplace_back(std::make_pair(title, power));
	}

	//std::vector<int> powers;

	for (int i = 0; i < numOfCharacter; ++i)
	{
		std::cin >> power;
		//powers.emplace_back(power);

		ComparePower(0, numOfTitle, power);
	}

	return 0;
}