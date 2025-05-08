#include <iostream>

using namespace std;

int n;

void Solve()
{
	cout << n << '\n' << 1;
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