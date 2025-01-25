#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int inputOfNum = 0;
	int inputOfWeight = 0;
	int inputOfHeight = 0;

	vector<pair<int, int>> listOfPeople;

	cin >> inputOfNum;

	for (int i = 0; i < inputOfNum; ++i)
	{
		cin >> inputOfWeight >> inputOfHeight;
		listOfPeople.emplace_back(inputOfWeight, inputOfHeight);
	}

	for (auto rank : listOfPeople)
	{
		int count = 1;

		for (auto other : listOfPeople)
		{
			if(rank == other)
				continue;

			if(rank.first < other.first && rank.second < other.second)
				++count;
		}

		cout << count << " ";
	}


	return 0;
}