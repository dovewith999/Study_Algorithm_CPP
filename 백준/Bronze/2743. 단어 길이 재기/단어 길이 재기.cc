#include <iostream>

using namespace std;

string str;

void Solve()
{
	cout << str.length() << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> str;
	Solve();

	return 0;
}