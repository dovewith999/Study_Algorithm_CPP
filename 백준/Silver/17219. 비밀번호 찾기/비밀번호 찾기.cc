#include <iostream>
#include <map>
#include <vector>

using namespace std;

int N, M;
map<string, string> m;
string a, b;

vector<string> results;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; ++i) 
	{
		cin >> a >> b;
		m[a] = b;
	}

	for (int i = 0; i < M; ++i) 
	{
		cin >> a;
		results.emplace_back(m[a]);
	}

	for(auto& iter : results)
		cout << iter << '\n';

	return 0;
}
