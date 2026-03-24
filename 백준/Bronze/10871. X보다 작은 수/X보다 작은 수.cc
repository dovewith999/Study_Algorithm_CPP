#include <iostream>

#define MAX 10001

using namespace std;

int N, X;
int arr[MAX];

void Solve()
{
	for (int i = 0; i < N; ++i) 
		cin >> arr[i];

	for (int i = 0; i < N; ++i) 
	{
		if (arr[i] < X) 
			cout << arr[i] << " ";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> X;

	Solve();

	return 0;
}