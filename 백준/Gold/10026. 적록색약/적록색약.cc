#include <iostream>
#include <cstring>

using namespace std;

int n, cnt;
char grid[101][101];
string input;
bool visited[101][101];

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

void dfs(int nowX, int nowY)
{
	if (visited[nowX][nowY]) 
		return;

	visited[nowX][nowY] = true;

	for (int i = 0; i < 4; i++)
	{
		int X = dx[i] + nowX;
		int Y = dy[i] + nowY;

		if ((grid[nowX][nowY] == grid[X][Y]) && !visited[X][Y])
		{
			dfs(X, Y);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		for (int j = 0; j < n; j++) 
			grid[i][j] = input[j];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j]) 
			{
				dfs(i, j);
				cnt++; 
			}
		}
	}

	cout << cnt << " ";
	cnt = 0;
	memset(visited, false, sizeof(visited));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (grid[i][j] == 'G')
				grid[i][j] = 'R';
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}