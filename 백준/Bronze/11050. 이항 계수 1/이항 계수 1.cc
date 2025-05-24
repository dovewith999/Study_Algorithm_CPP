#include <iostream>

#define MAX 11

using namespace std;

int N, K;

int factorial[MAX] = {1, 1};

void Solve()
{
	int result = 0;

	for (int i = 2; i <= N; ++i)
	{
		factorial[i] = factorial[i - 1] * i;
	}

	cout << factorial[N] / (factorial[N - K] * factorial[K]) << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> K;

	Solve();

	return 0;
}