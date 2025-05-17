#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<pair<int, int>> numbers;

void Solve()
{
	for (int i = 0; i < n; ++i)
	{
		int x, y; 
		cin >> x >> y;
		numbers.push_back({x, y});
	}

	::sort(numbers.begin(), numbers.end());

	for(int i = 0; i < n; ++i)
		cout << numbers[i].first << " " << numbers[i].second << "\n";
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