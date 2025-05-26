#include <iostream>
#include <queue>

using namespace std;

int n;

void Solve()
{
	queue<int> q;
	
	for (int i = 1; i <= n; ++i)
	{
		q.push(i);
	}

	while (q.size() > 1)
	{
		q.pop();

		int num = q.front();
		q.pop();
		q.push(num);
	}

	cout << q.front() << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	Solve();

	return 0;
}