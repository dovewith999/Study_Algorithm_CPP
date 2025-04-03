#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 100

using namespace std;

int map[MAX][MAX] = { 0 };
int visited[MAX][MAX] = { false };

int m, n, k;
int x_1, y_1, x_2, y_2;

vector<int> numOfPixels;

int dir_X[4] = { -1, 1, 0, 0 };
int dir_Y[4] = { 0, 0, -1, 1 };

void BFS(int startX, int startY)
{
	queue<pair<int, int>> q;
	q.push({ startX, startY });
	visited[startX][startY] = true;

	int numOfPixel = 1;

	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (int i = 0; i < 4; ++i)
		{
			int newX = x + dir_X[i];
			int newY = y + dir_Y[i];

			if (newX < 0 || newY < 0 || newX >= n || newY >= m || map[newY][newX] == 1 || visited[newY][newX] == true)
				continue;
			
			q.push({ newY, newX });
			visited[newY][newX] = true;
			++numOfPixel;
		}
	}

	numOfPixels.emplace_back(numOfPixel);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n >> k;

	for (int i = 0; i < k; ++i)
	{
		cin >> x_1 >> y_1 >> x_2 >> y_2;

		for (int j = y_1; j < y_2; ++j)
		{
			for (int ii = x_1; ii < x_2; ++ii)
				map[j][ii] = 1;
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(map[i][j] == 0 && visited[i][j] == false)
				BFS(i, j);
		}
	}

	sort(numOfPixels.begin(), numOfPixels.end());

	cout << numOfPixels.size() << '\n';
	
	for (int i = 0; i < numOfPixels.size(); ++i)
		cout << numOfPixels[i] << " ";

	return 0;
}