#include <iostream>

#define MAX 9
using namespace std;

int N, M;

int arr[MAX];
int visited[MAX];

void Solve(int k, int num)
{
	if (k == M)
	{
		for (int i = 0; i < M; ++i)
		{
			cout << arr[i] << " ";
		}

		cout << "\n";
		return;
	}

	for (int i = num; i <= N; ++i)
	{
		visited[i] = true;
		arr[k] = i;
		Solve(k + 1, i);
		visited[i] = false;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	Solve(0, 1);

	return 0;
}