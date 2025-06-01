#include <iostream>
#include <vector>

using namespace std;

int N, K;

int solution()
{
	vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

	int answer = 1;

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 0; j <= K; ++j)
		{
			if(j == 0 || i == j) 
				dp[i][j] = 1;

			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
	}

	answer = dp[N][K];

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> K;

	cout << solution();
}  