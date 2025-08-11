#include <iostream>

using namespace std;

int N, K;
int cnt = 0;

int arr[2][6] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> N >> K;

	for (int i = 0; i < N; ++i)
	{
		int gender, grade;
		cin >> gender >> grade;

		if (arr[gender][grade] == 0)
			++cnt;

		++arr[gender][grade];

		if (arr[gender][grade] >= K)
			arr[gender][grade] %= K;
	}

	cout << cnt << '\n';
}