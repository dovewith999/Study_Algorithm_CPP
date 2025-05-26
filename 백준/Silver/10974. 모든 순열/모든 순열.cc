#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

void Solve()
{
	vector<int> vec;

	for (int i = 1; i <= n; ++i)
		vec.push_back(i);
	
	do 
	{
		for(auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";

		cout << '\n';
	} while (next_permutation(vec.begin(), vec.end()));
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