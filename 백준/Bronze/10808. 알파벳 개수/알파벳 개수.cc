#include <iostream>

using namespace std;

string s;

int counts[26];

void solution()
{
	for (char c : s)
	{
		++counts[c - 'a'];
	}

	for (int i = 0; i <26; ++i)
	{
		cout << counts[i] << ' ';
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> s;

	solution();
}