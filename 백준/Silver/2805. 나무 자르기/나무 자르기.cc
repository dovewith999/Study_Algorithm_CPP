#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int N, M;
vector<ll> vec;

bool Solution(int x)
{
	ll cur = 0;
    
	for (int i = 0; i < N; ++i)
	{
		if (vec[i] - x < 0)
			continue;

		cur += vec[i] - x;
	}

	return cur >= M;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	
	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		int num;
		cin >> num;
		vec.emplace_back(num);
	}

	ll st = 0;
	ll en = 2000000000;

	while (st < en)
	{
		ll mid = (st + en + 1) >> 1;

		if (Solution(mid))
			st = mid;
		

		else
			en = mid - 1;
	}

	cout << st;
	return 0;
}