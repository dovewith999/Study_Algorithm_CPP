#include <iostream>

#define MOD 1000000000

using namespace std;

int n;
int dp[101][10] = { 0 };

int result = 0;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for(int i = 1; i < 10; ++i)
		dp[1][i] = 1;

	for (int i = 2; i <= n; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			if(j == 0)
				dp[i][j] = dp[i - 1][j + 1] % MOD;

			else if(j == 9)
				dp[i][j] = dp[i - 1][j - 1] % MOD;

			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % MOD;
		}
	}

	for(int i = 0; i < 10; ++i)
		result = (result + dp[n][i]) % MOD;

	cout << result << '\n';

	return 0;
}