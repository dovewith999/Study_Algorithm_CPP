#include <iostream>

#define MAX 101

using namespace std;

int n, m, a, b;
int arr[MAX];

void Solve()
{
	for (int i = 1; i <= n; ++i)
		arr[i] = i;

	while (m--) 
	{
		cin >> a >> b;

		for (int i = 0; i <= (b - a) / 2; ++i) 
			swap(arr[a + i], arr[b - i]);
	}

	for (int i = 1; i <= n; ++i) 
		cout << arr[i] << ' ';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n >> m;

	Solve();

	return 0;
}