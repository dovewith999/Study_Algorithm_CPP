#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 1000001

#pragma region Union-Find
vector<int> p(10005, -1);

int find(int x) 
{
	if (p[x] < 0) 
		return x;

	return p[x] = find(p[x]);
}

bool is_diff_group(int u, int v) 
{
	u = find(u);
	v = find(v);

	if (u == v)
		return 0;

	if (p[u] == p[v]) 
		p[u]--;

	if (p[u] < p[v]) 
		p[v] = u;
	
	else p[u] = v;
	
	return 1;
}
#pragma endregion

int v, e;

tuple<int, int, int> edge[MAX];

void solution()
{
	int answer = 0;

	for (int i = 0; i < e; ++i)
	{
		int cost, a, b;
		cin >> a >> b >> cost;

		edge[i] = make_tuple(cost, a, b);
	}

	sort(edge, edge + e); // 튜풀울 cost 기준으로 정렬

	int cnt = 0;

	for (int i = 0; i < e; ++i)
	{
		int cost, a, b;
		tie(cost, a, b) = edge[i];

		if (!is_diff_group(a, b))
			continue;

		answer += cost;

		++cnt;
		if (cnt == v - 1)
			break;
	}

	cout << answer << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> v >> e;

	solution();

	return 0;
}