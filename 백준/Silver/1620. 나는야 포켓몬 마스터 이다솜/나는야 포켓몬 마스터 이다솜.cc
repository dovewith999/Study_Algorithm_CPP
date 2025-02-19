#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int n, m;
string str;
map<string, int> num;
string name[100001];

vector<string> results;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		cin >> str;
		num.insert({ str, i });
		name[i] = str;
	}

	for (int i = 1; i <= m; ++i) 
	{
		cin >> str;
		results.emplace_back(str);
	}

	for (auto& iter : results)
	{
		if (isdigit(iter[0]))
			cout << name[stoi(iter)] << '\n';

		else
			cout << num.find(iter)->second << '\n';
	}

	return 0;
}
