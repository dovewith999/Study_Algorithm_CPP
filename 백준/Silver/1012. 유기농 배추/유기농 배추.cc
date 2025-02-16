#include <iostream>
#include <vector>
#include <queue>

#define MAX 51

using namespace std;

int map[MAX][MAX] = { 0 };
bool visited[MAX][MAX] = { false };

vector<int> results;

int m, n, k;
int output = 0;

int dir_X[4] = { 1, -1, 0, 0 };
int dir_Y[4] = { 0, 0, 1, -1 };

void BFS(int startX, int startY)
{
	visited[startX][startY] = true;
	queue<pair<int, int>> q;
	q.push({ startX, startY });

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int newX = x + dir_X[i];
			int newY = y + dir_Y[i];

			if (0 <= newX && 0 <= newY && newX < m && newY < n && visited[newX][newY] == false && map[newX][newY] == 1)
			{
				q.push({ newX, newY });
				visited[newX][newY] = true;
			}
		}
	}

	++output;
}

void ResetMap()
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			visited[i][j] = false;
			map[i][j] = 0;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> m >> n >> k;
		output = 0;

		for (int i = 0; i < k; ++i)
		{
			int x, y;
			cin >> x >> y;
			map[x][y] = 1;
		}

		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (map[i][j] == 1 && visited[i][j] == false)
					BFS(i, j);
			}
		}

		results.emplace_back(output);
		ResetMap();
	}

	for (auto& iter : results)
		cout << iter << "\n";

	return 0;
}
