#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int>> vec;
vector<int> results;

void Solution(pair<int, int> taste, int idx)
{
	if (idx == N)
	{
		if(taste.first != 0 && taste.second != 0)
			results.emplace_back(abs(taste.first - taste.second));

		return;
	}

	int firstTaste = taste.first * vec[idx].first;
	int secondTaste = taste.second + vec[idx].second;

	if (N > 1)
		Solution(taste, idx + 1);

	Solution({ firstTaste , secondTaste }, idx + 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int first, second;

		cin >> first >> second;
		vec.push_back({ first, second });
	}

	Solution({1, 0}, 0);
	sort(results.begin(), results.end());

	cout << results[0] << '\n';
	
	return 0;
}