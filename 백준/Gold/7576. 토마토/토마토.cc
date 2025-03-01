//7576 토마토

#include <iostream>
#include <queue>
#define MAX 1001

using namespace std;

int box[MAX][MAX] = { 0 };
queue<pair<int, int>> counts;

int dir_X[4] = { 1, -1, 0, 0 };
int dir_Y[4] = { 0, 0, 1, -1 };

int n, m;
int result = 0;
bool finish;
bool notRipe = false;

void BFS()
{
	while (!counts.empty())
	{
		int newX = counts.front().first;
		int newY = counts.front().second;
		counts.pop();

		for (int i = 0; i < 4; ++i)
		{
			for (int j = 0; j < 4; ++j)
			{
				int x = newX + dir_X[i];
				int y = newY + dir_Y[i];

				if (box[x][y] == 0 && x < m && y < n && x >= 0 && y >= 0)
				{
					box[x][y] = box[newX][newY] + 1;
					counts.push({x, y});
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> box[i][j];

			if(box[i][j] == 1)
				counts.push({i, j});
		}
	}

	BFS();

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (box[i][j] == 0)
			{
				notRipe = true;
				break;
			}

			else
			{
				if(result < box[i][j])
					result = box[i][j];
			}
		}

		if (notRipe == true)
			break;
	}


	if(notRipe == true)
		cout << "-1" << "\n";

	else
		cout << result - 1 << '\n';

	return 0;
}
