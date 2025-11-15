#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int m, const vector<int>& arr)
{
	int answer = 0x7fffffff;

	vector<int> a = arr;

	int end = 0;
	int total = a[0];
	for (int st = 0; st < a.size(); ++st)
	{
		while (end < a.size() && total < m)
		{
			++end;

			if (end != a.size())
			{
				total += a[end];
			}
		}

		if (end == a.size())
		{
			break;
		}

		answer = min(answer, end - st + 1);
		total -= a[st];
	}

	if (answer == 0x7fffffff)
	{
		answer = 0;
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

	cout << solution(m, arr) << "\n";

	return 0;
}