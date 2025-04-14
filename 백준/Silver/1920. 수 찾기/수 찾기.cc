#include <iostream>
#include <algorithm>

#define MAX 100001

using namespace std;

int N, M;
int arr[MAX];
int cmpArr[MAX];

void Solve()
{
	for (int i = 0; i < M; ++i)
	{
		int start = 0;
		int end = N - 1;
		int mid = (start + end) / 2;

		while (start <= end)
		{
		    mid = (start + end) / 2;

			if (arr[mid] == cmpArr[i])
			{
				cout << "1" << "\n";
				break;
			}

			else if (arr[mid] > cmpArr[i])
				end = mid - 1;

			else if (arr[mid] < cmpArr[i])
				start = mid + 1;
		}

		if(start > end)
			cout << "0" << "\n";
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