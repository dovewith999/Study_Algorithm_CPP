#include <iostream>
#include <vector>

std::vector<int> Link[101];
bool Visited[101];
int answer = 0;

int Dfs(int key)
{
	for (int i = 0; i < Link[key].size(); ++i)
	{
		int k = Link[key][i];

		if (Visited[k] == false)
		{
			Visited[k] = true;
			++answer;
			Dfs(k);
		}
	}

	return answer;
}

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);

	std::fill_n(Visited, 101, false);

	int numOfComputer = 0;
	int numOfNetLink = 0;

	std::cin >> numOfComputer >> numOfNetLink;

	for (int i = 0; i < numOfNetLink; ++i)
	{
		int key = 0;
		int value = 0;

		std::cin >> key >> value;

		Link[key].emplace_back(value);
		Link[value].emplace_back(key);
	}

	Visited[1] = true;

	std::cout << Dfs(1) << std::endl;

	return 0;
}