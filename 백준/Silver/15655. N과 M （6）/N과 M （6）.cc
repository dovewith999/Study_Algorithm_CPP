#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

bool visited[9];
vector<int> vec;
vector<int> num;

void dfs(int k, int start)
{	
	if (k == m)
	{
		for(int i = 0; i < m; ++i)
			cout << num[i] << ' ';

		cout << '\n';
		return;
	}

	for (int i = start; i < n; ++i)
	{
		if (!visited[i])
		{
			num[k] = vec[i];
			visited[i] = true;
			dfs(k + 1, i + 1);
			visited[i] = false;
		}
	}
}

void Solve()
{
	for (int i = 0; i < n; ++i)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	dfs(0, 0);
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	vec.resize(n);
	num.resize(n);

	Solve();

	return 0;
}