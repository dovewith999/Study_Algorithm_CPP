#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 9

using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int k)
{
	if (k == m)
	{
		for (int i = 0; i < m; ++i)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for(int i = 0; i < n; ++i)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[k] = i + 1;
			dfs(k+1);
			visited[i] = false;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	dfs(0);

	return 0;
}