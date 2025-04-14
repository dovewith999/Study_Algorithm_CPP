#include <iostream>
#include <algorithm>

#define MAX 500001

using namespace std;

int N, M;
int arr[MAX];
int cmpArr[MAX];

void Solve()
{
	for (int i = 0; i < M; ++i)
	{
		// lower_bound: 찾고자 하는 값 이상이 처음 나타나는 위치
		int lower = lower_bound(arr, arr + N, cmpArr[i]) - arr;

		// upper_bound: 찾고자 하는 값보다 큰 값이 처음 나타나는 위치
		int upper = upper_bound(arr, arr + N, cmpArr[i]) - arr;

		// 두 위치의 차이가 해당 숫자의 개수
		cout << upper - lower << " ";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; ++i)
		cin >> arr[i];

	cin >> M;

	for (int i = 0; i < M; ++i)
		cin >> cmpArr[i];

	::sort(arr, arr + N);

	Solve();

	return 0;
}