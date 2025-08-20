#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N;

void solution()
{
	priority_queue<int, vector<int>, greater<int>> pq;

	while (N--)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			if(pq.empty())
				cout << 0 << '\n';

			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}

		else
		{
			pq.push(num);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    cin >> N;

	solution();

	return 0;
}