#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, s = 0;
vector<int> ranks;

void Solve()
{
	for (int i = 0; i < n * 2; ++i)
	{
		int rank;
		cin >> rank;
		ranks.push_back(rank);
	}

	sort(ranks.begin(), ranks.end());

	s = (ranks.front() + ranks.back());

	for (int i = 1; i < ranks.size() - 2; ++i)
	{
		int cmpNum = ranks[i] + ranks[ranks.size() - 1 - i];

		if(s > cmpNum)
			s = cmpNum;
	}

	cout << s << "\n";
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