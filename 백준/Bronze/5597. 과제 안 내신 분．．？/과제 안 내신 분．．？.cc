#include <iostream>

#define MAX 31

using namespace std;

int arr[MAX] = { 0, };
int a;
;

void Solve()
{

	for (int i = 1; i <= 30; ++i) 
	{
		if (!arr[i]) 
			cout << i << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 0; i < 28; i++) 
	{
		cin >> a;
		arr[a] = 1;
	}

	Solve();

	return 0;
}