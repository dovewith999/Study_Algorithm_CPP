#include <iostream>

using namespace std;

int T, N, M;
int result;
int tmp;

void Solve()
{
	while (T--)
	{
		result = 1;
		tmp = 1;
		cin >> M >> N;

		for (int i = N; i > N - M; --i)
		{
			result *= i;
			result /= tmp;
			tmp++;
		}

		cout << result << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> T;

	Solve();

	return 0;
}