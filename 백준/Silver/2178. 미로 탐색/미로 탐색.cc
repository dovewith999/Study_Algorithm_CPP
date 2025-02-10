#include <iostream>
#include <queue>
#define MAX 101

using namespace std;

int n, m;

int maze[MAX][MAX];
bool visited[MAX][MAX];
int dist[MAX][MAX];

int x_dir[4] = {-1, 1, 0 ,0};
int y_dir[4] = { 0, 0, -1, 1 };

queue<pair<int, int>> q;

void bfs(int start_X, int start_Y)
{
	visited[start_X][start_Y] = true;
	++dist[start_X][start_Y];
	q.push({start_X, start_Y});

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;

		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int new_X = x + x_dir[i];
			int new_Y = y + y_dir[i];

			if ((0 <= new_X && new_X < n) && (0 <= new_Y && new_Y < m)
				&& visited[new_X][new_Y] == false && maze[new_X][new_Y] == 1)
			{
				visited[new_X][new_Y] = true;
				q.push({new_X, new_Y});
				dist[new_X][new_Y] = dist[x][y] + 1;
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for(int i = 0; i < n; ++i)
	{
		string row;
		cin >> row;

		for (int j = 0; j < m; ++j)
			maze[i][j] = row[j] - '0';
	}

	bfs(0, 0);

	cout << dist[n - 1][m - 1];

	return 0;
}