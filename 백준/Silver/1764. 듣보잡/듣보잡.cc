#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<string, int> ma;
vector<string> vt;
int n, m;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n + m; ++i) 
	{
		string str;
		cin >> str;
		ma[str]++;

		if (ma[str] > 1)
			vt.push_back(str);
	}

	sort(vt.begin(), vt.end());
	cout << vt.size() << '\n';

	for (auto o : vt)
		cout << o << '\n';

	return 0;
}
