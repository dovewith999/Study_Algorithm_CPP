#include <iostream>
#include <numeric>
using namespace std;
int n, m;

void solution()
{
	cout << gcd(n, m) << '\n';
	cout << lcm(n, m) << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    cin >> n >> m;

	solution();

	return 0;
}