#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> s;

void solution(int _m, const vector<int>& _arr)
{
	if (s.size() >= _m)
	{
		for (int i = 0; i < _m; ++i)
		{
			cout << s[i] << " ";
		}
		
		cout << "\n";
		
		return;
	}

	for (int i = 0; i < _arr.size(); ++i)
	{
		if (s.size() < _m)
		{
			s.emplace_back(_arr[i]);
			solution(_m, _arr);
			s.pop_back();
		}
	}

	return;
}

int main()
{
	ios::sync_with_stdio;
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m;

	cin >> n >> m;

	vector<int> arr(n, 0);

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	sort(arr.begin(),arr.end());

	solution(m, arr);

	return 0;
}