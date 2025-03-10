#include <iostream>
#include <vector>

#define MAX 100001

using namespace std;

vector<int> tree[MAX];

int parent[MAX];
bool visited[MAX] = { false };

int n;
int dot1, dot2;

void DFS(int start)
{
	visited[start] = true;

	for (int i = 0; i < tree[start].size(); ++i)
	{
		int nextNum = tree[start][i];
		if(!visited[nextNum])
		{
			parent[nextNum] = start;
			DFS(nextNum);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for(int i = 0; i < n - 1; ++i)
	{
		cin >> dot1 >> dot2;

		tree[dot1].emplace_back(dot2);
		tree[dot2].emplace_back(dot1);
	}

	DFS(1);

	for(int i = 2; i <= n; ++i)
		cout << parent[i] << "\n";

	return 0;
}