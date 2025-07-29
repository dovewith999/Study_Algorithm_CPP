#include <iostream>
#define MAX 21

using namespace std;

int N, M;
int arr[MAX] = { 0 };
bool visited[MAX] = { false };

int totalCount = 0;

void Solution(int cur, int idx)
{
	if (idx == N)
	{
		if (cur == M)
		{
			++totalCount;
		}

		return;
	}

	Solution(cur, idx + 1);		     // 지금 수를 더함
	Solution(cur + arr[idx], idx + 1); // 지금 수를 더하지 않음
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> N >> M;
	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	Solution(0, 0);

	if (M == 0)
		--totalCount;

	cout << totalCount << '\n';
	
	return 0;
}