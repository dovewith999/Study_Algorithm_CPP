#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 26

using namespace std;

int n;
int numOfHouse = 0;

int map[MAX][MAX] = { 0 };
bool visitied[MAX][MAX] = { false };

vector<int> results;

int dir_X[4] = { 1, -1, 0, 0 };
int dir_Y[4] = { 0, 0, 1, -1 };

void DFS(int start_X, int start_Y)
{
	visitied[start_X][start_Y] = true;
	++numOfHouse;

	for (int i = 0; i < 4; ++i)
	{
		int x = start_X + dir_X[i];
		int y = start_Y + dir_Y[i];

		if (0 > x || 0 > y || n < x || n < y)
			continue;

		if (map[x][y] == 1 && visitied[x][y] == false)
			DFS(x, y);
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
		string input;
		cin >> input;
		for (int j = 0; j < n; ++j)
		{
			map[i][j] = input.at(j) - '0';
		}
	}

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (visitied[i][j] == false && map[i][j] == 1)
			{
				DFS(i, j);
				++count;
				results.emplace_back(numOfHouse);
				numOfHouse = 0;
			}
		}
	}

	sort(results.begin(), results.end());
	cout << count << "\n";
	for(auto& iter : results)
		cout << iter << "\n";

	return 0;
}
