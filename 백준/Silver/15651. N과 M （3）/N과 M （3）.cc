#include <iostream>

#define MAX 8
using namespace std;

int N, M;

int arr[MAX];

void Solve(int k)
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

	for (int i = 0; i < N; ++i)
	{
		arr[k] = i + 1;
		Solve(k + 1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	Solve(0);

	return 0;
}