#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N;

struct Compare
{ // 정렬 기준 바꾸는 함수
	bool operator()(int a, int b)
	{
		if (abs(a) == abs(b))
			return a > b; // 절대값이 같은 경우 가장 작은 원소로
		
		return abs(a) > abs(b); // 절대값이 작은 원소로
	}
};

void solution()
{
	priority_queue<int, vector<int>, Compare> pq;

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
			pq.push(num);
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