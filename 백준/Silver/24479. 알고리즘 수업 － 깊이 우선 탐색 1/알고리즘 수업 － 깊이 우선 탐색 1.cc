#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> m[100001];

bool visited[100001] = { false };
int visitCount[100001] = { 0 };

int cnt = 0;

void dfs(int startPoint)
{
	visited[startPoint] = true;
	visitCount[startPoint] =  ++cnt;

	for (int i = 0; i < m[startPoint].size(); ++i)
	{
		int x = m[startPoint][i];
		if (visited[x] == false)
			dfs(x);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int numOfPoint = 0, numOfLine = 0, startPoint = 0;

	cin >> numOfPoint >> numOfLine >> startPoint;

	for (int i = 1;  i <= numOfLine; ++i)
	{
		int u = 0, v = 0;
		cin >> u >> v;

		m[u].emplace_back(v);
		m[v].emplace_back(u);
	}

	for (int i = 1; i <= numOfPoint; ++i)
	{
		sort(m[i].begin(), m[i].end());
	}

	dfs(startPoint);

	for (int i = 1; i <= numOfPoint; ++i)
	{
		cout << visitCount[i] << '\n';
	}
	return 0;
}