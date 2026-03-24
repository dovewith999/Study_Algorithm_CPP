#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		vec.emplace_back(num);
	}

	sort(vec.begin(), vec.end());

	for(auto& iter : vec)
		cout << iter << "\n";

	return 0;
}