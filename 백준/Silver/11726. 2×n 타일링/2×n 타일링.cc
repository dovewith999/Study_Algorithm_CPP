#include <iostream>

using namespace std;

int dp[1001] = { 0 };

int Func_Fibonacci(int n)
{
	if(dp[n] == 0)
		dp[n] = (Func_Fibonacci(n - 1) + Func_Fibonacci(n - 2)) % 10007;

	return dp[n];
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;

	cout << Func_Fibonacci(n) << "\n";

	return 0;
}