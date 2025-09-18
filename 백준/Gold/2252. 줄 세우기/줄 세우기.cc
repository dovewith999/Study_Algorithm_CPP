#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define MAX 32001

vector<int> adj[MAX];
int degree[MAX];
int n, m;

vector<int> result;

void solution()
{
	for (int i = 0; i < m; ++i)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		degree[b]++;
	}

	queue<int> q;

	for (int i = 1; i <= n; ++i)
		if (degree[i] == 0)
			q.push(i);

	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		cout << cur << ' ';

		for (int next : adj[cur])
		{
			if (--degree[next] == 0)
			{
				q.push(next);
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> m;

	solution();

	return 0;
}