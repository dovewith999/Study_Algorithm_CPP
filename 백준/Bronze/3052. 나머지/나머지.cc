#include <iostream>

#define MAX 42

using namespace std;

int countOfNum[MAX] = {};
int v;

void Solve()
{
	for (int i = 0; i < 10; ++i) 
	{
		cin >> v;
		countOfNum[v % MAX]++;
	}

	int result = 0;

	for (int v : countOfNum) 
	{
		if (v > 0) 
			result++;
	}

	cout << result;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	Solve();

	return 0;
}