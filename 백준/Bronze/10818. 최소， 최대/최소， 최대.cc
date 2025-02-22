#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<int> results;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int n;
		cin >> n;
		results.emplace_back(n);
	}

	sort(results.begin(), results.end());

	cout << results.front() << " " << results.back();

	return 0;
}
