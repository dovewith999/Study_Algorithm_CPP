#include <iostream>
#include <vector>
#include <algorithm>

#define ll long long

using namespace std;

int N;
vector<ll> vec;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		long long temp;
		cin >> temp;
		vec.emplace_back(temp);
	}

	sort(vec.begin(), vec.end());

    int max = 0;
    int cnt = 1;
	long long result = vec[0];

	for (int i = 1; i < vec.size(); ++i)
	{
		if (vec[i] == vec[i - 1])
		{
			++cnt;
		}

		else
		{
			cnt = 1;
			continue;
		}
		

		if (cnt > max)
		{
			max = cnt;
			result = vec[i];
		}
	}

	cout << result;
	
	return 0;
}