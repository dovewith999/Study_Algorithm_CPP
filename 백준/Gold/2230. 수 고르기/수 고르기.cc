#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int m, const vector<int>& arr)
{
	int answer = 0x7fffffff;

	vector<int> a = arr;
	sort(a.begin(), a.end());
	
	int end = 0;

	for (int st = 0; st < a.size(); ++st)
	{
		while (end < a.size() && a[end] - a[st] < m)
		{
			++end;
		}

		if (end == a.size())
		{
			break;
		}

		answer = min(answer, a[end] - a[st]);
	}

	return answer;
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
		int arrNum;
		cin >> arrNum;
		arr[i] = arrNum;
	}

	cout << solution(m ,arr) << "\n";

	return 0;
}