#include <iostream>
#include <algorithm>
#include <vector>

const int MAX = 10001;

std::vector<int> Towns[MAX];
int Dp[MAX][2];
bool Visited[MAX];
int Population[MAX];

void Dfs(int Node)
{
	Visited[Node] = true;

	Dp[Node][0] = 0;
	Dp[Node][1] = Population[Node];

	for (int Next : Towns[Node])
	{
		if (Visited[Next])
		{
			continue;
		}

		Dfs(Next);
		Dp[Node][0] += std::max(Dp[Next][0], Dp[Next][1]);
		Dp[Node][1] += Dp[Next][0];
	}
}

int main()
{
	int N = 0;
	std::cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		std::cin >> Population[i];
	}

	for (int i = 0, a, b; i < N - 1; ++i)
	{
		std::cin >> a >> b;
		Towns[a].push_back(b);
		Towns[b].push_back(a);
	}

	Dfs(1);
	std::cout << std::max(Dp[1][1], Dp[1][0]);

	return 0;
}