#include <iostream>
#include <queue>
using namespace std;
#define MAX 1001

int n, m;
int map[MAX][MAX] = { 0 };
bool visited[MAX][MAX] = { false };	
int depth[MAX][MAX] = { 0 };

int dir_x[4] = { -1, 1, 0, 0 };	
int dir_y[4] = { 0, 0, -1, 1 };	

void solution(int startX, int startY)
{
	queue<pair<int, int>> q;
	q.push({ startX, startY });
	visited[startX][startY] = true;

	depth[startX][startY] = 0;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;	

		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int newX = x + dir_x[i];
			int newY = y + dir_y[i];	

			if (newX < 0 || newY < 0 || newX >= n || newY >= m || visited[newX][newY])
				continue;

			if (map[newX][newY] != 0)
			{
				q.push({ newX, newY });
				depth[newX][newY] = depth[x][y] + 1;
			}

			visited[newX][newY] = true;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    cin >> n >> m;

	int num;
	int startX = 0, startY = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> map[i][j];
			if (map[i][j] == 2)
			{
				startX = i;
				startY = j;	
			}
		}
	}

	solution(startX, startY);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (map[i][j] == 0)
				cout << 0 << " ";
			else if (visited[i][j])
				cout << depth[i][j] << " ";
			else
				cout << -1 << " ";
		}
		cout << "\n";
	}	

	return 0;
}