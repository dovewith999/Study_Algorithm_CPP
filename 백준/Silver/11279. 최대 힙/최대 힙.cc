#include <iostream>
#include <queue>

using namespace std;

int N;


priority_queue<int> pq;

void solution()
{
	for (int i = 0; i < N; ++i)
	{
		int input;
		cin >> input;

		if (input == 0)
		{
			int output = 0;

			if (pq.empty() == false)
			{
				output = pq.top();
				pq.pop();
			}

			cout << output << '\n';
		}

		else
			pq.push(input);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	solution();
}  