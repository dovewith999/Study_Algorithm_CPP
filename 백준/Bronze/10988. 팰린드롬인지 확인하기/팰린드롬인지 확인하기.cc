#include <iostream>

using namespace std;

string s;

void Solve()
{
	for (int i = 0; i <= s.length() / 2; ++i) 
	{
		if (s[i] != s[s.length() - i - 1])
		{
			cout << 0;
			return;
		}
	}

	cout << 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> s;

	Solve();

	return 0;
}