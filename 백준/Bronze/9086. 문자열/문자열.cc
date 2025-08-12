#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	string s;

	cin >> n;

	while (n--)
	{
		cin >> s;
		cout << s[0] << s[s.length() - 1] << '\n';
	}

	return 0;
}