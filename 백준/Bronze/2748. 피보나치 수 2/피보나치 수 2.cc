#include <iostream>

#define MAX 90

using namespace std;

long long dp[MAX] = { 0, 1 };
int n = 0;

long long Fibonacci(int num)
{
	for(int i = 2; i <= num; ++i)
		dp[i] = dp[i - 1] + dp[i - 2];

	return dp[num];
}

void Solve()
{
	cout << Fibonacci(n);
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	Solve();

	return 0;
}