#include <iostream>

#define MAX 101

using namespace std;

int n, m;
int arr[MAX] = { 0, };
int a, b, c;

void Solve()
{
	for (int i = 0; i < m; ++i) 
	{
		cin >> a >> b >> c;

		for (int j = a; j <= b; ++j) 
		{
			arr[j] = c;
		}
	}

	for (int i = 1; i <= n; ++i) 
	{
		cout << arr[i] << ' ';
	}
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