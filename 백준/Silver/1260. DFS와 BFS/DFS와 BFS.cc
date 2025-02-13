#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> dots[10001];
bool visited_DFS[1001] = { false };
bool visited_BFS[1001] = { false };

vector<int>resultDFS;
vector<int>resultBFS;

void DFS(int start)
{
	visited_DFS[start] = true;
	resultDFS.emplace_back(start);

	for (int i = 0; i < dots[start].size(); ++i)
	{
		int idx = dots[start][i];
		if(visited_DFS[idx] == false)
			DFS(idx);
	}
}

void BFS(int start)
{
	visited_BFS[start] = true;
	resultBFS.emplace_back(start);

	queue<int> q;
	q.push(start);

	while (!q.empty())
	{
		int num = q.front();
		q.pop();

		for (int i = 0; i < dots[num].size(); ++i)
		{
			if(visited_BFS[dots[num][i]] == false)
			{
				int idx = dots[num][i];
				visited_BFS[idx] = true;
				q.push(idx);
				resultBFS.emplace_back(idx);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;
	cin >> n >> m >> v;

	for (int i = 0; i < m; ++i)
	{
		int dot1, dot2;
		cin >> dot1 >> dot2;

		dots[dot1].emplace_back(dot2);
		dots[dot2].emplace_back(dot1);

		sort(dots[dot1].begin(), dots[dot1].end());
		sort(dots[dot2].begin(), dots[dot2].end());
	}

	DFS(v);
	BFS(v);

	for(auto& iter : resultDFS)
		cout << iter << " ";

	cout << "\n";

	for (auto& iter : resultBFS)
		cout << iter << " ";

	return 0;
}