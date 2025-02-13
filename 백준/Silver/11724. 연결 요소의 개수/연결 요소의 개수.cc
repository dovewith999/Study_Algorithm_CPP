#include <iostream>
#include <vector>

using namespace std;

vector<int> dot[1001];
bool visited[1001] = { false };

void DFS(int start)
{
	visited[start] = true;

	for (int i = 0; i < dot[start].size(); ++i)
	{
		int idx = dot[start][i];

		if (visited[idx] == false)
			DFS(idx);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, m = 0, cnt = 0;
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int dot1 = 0, dot2 = 0;
		cin >> dot1 >> dot2;

		dot[dot1].emplace_back(dot2);
		dot[dot2].emplace_back(dot1);
	}

	for (int i = 1; i <= n; ++i)
	{
		if (visited[i] == false)
		{
			DFS(i);
			++cnt;
		}
	}

	cout << cnt << "\n";

	return 0;
}
