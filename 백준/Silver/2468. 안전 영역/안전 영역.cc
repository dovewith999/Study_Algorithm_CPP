#include <iostream>
#include <queue>
#include <cstring>

#define MAX 101

using namespace std;

int input[MAX][MAX] = { 0 };
int  map[MAX][MAX] = { 0 };
bool visited[MAX][MAX] = { false };

queue<pair<int, int>> q;

int n;
int minValue = 100, maxValue = 1;
int countSafeArea = 0;
int maxSafeArea = 1;

int dir_X[4] = { 1, -1, 0, 0 };
int dir_Y[4] = { 0, 0, 1, -1 };

void BFS(int startX, int startY)
{
	visited[startX][startY] = true;
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

			if (newX >= 0 && newY >= 0 && newX < n && newY < n && !visited[newX][newY] && map[newX][newY])
			{
				visited[newX][newY] = true;
				q.push({ newX, newY });
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> input[i][j];

			if (input[i][j] > maxValue)
				maxValue = input[i][j];
		}
	}

	//높이 1부터 maxValue까지 설정
	for (int i = 1; i <= maxValue; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if (input[j][k] < i)
					map[j][k] = 0;

				else
					map[j][k] = 1;
			}
		}

		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				if (!visited[j][k] && map[j][k])
				{
					BFS(j, k);
					++countSafeArea;
				}
			}
		}

		if(maxSafeArea < countSafeArea)
			maxSafeArea = countSafeArea;

		countSafeArea = 0;
		memset(visited, 0, sizeof(visited));
	}

	cout << maxSafeArea << '\n';

	return 0;
}