#include <iostream>

#define ll long long

using namespace std;

ll Solve(ll n)
{
	if (n < 2)
		return 1;

	return n * Solve(n - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	ll N;
	cin >> N;
	cout << Solve(N);

	return 0;
}