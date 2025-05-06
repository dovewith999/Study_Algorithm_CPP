#include <iostream>

using namespace std;

int total = 0;
string s;

void Solve()
{
	for (int i = 0; i < s.size(); ++i) 
	{
		total += ((int)s[i] - 65) / 3 + 3;

		if (s[i] == 'S' || s[i] == 'V' || s[i] == 'Y' || s[i] == 'Z') 
			total--;
	}

	cout << total;
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