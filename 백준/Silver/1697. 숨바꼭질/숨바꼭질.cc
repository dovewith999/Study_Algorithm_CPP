#include <iostream>
#include <queue>

#define MAX 100001

using namespace std;

int n, k;
bool visited[MAX] = { false };

void BFS()
{
	queue<pair<int, int>> q;
	q.push({ n, 0 });
	visited[n] = true;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		if (x == k)
		{
			cout << y << '\n';
			break;
		}

		if (x + 1 >= 0 && x + 1 < MAX)
		{
			if (!visited[x + 1])
			{
				visited[x + 1] = true;
				q.push({ x + 1, y + 1 });
			}
		}
		if (x - 1 >= 0 && x - 1 < MAX)
		{
			if (!visited[x - 1])
			{
				visited[x - 1] = true;
				q.push({ x - 1, y + 1 });
			}
		}

		if (x * 2 >= 0 && x * 2 < MAX)
		{
			if (!visited[x * 2])
			{
				visited[x * 2] = true;
				q.push({ x * 2, y + 1 });
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;

	BFS();

	return 0;
}
