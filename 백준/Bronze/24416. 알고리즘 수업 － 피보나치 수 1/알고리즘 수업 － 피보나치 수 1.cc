#include <iostream>

#define MAX 41

using namespace std;

int n;
int result[MAX];

int countOfDp = 0;

int Recurtion(int num)
{
	if (num == 1 || num == 2)
		return 1;

	else
		return Recurtion(num - 1) + Recurtion(num - 2);
}

int Dp(int num)
{
	for (int i = 3; i <= num; ++i)
	{
		result[i] = result[i - 1] + result[i - 2];
		++countOfDp;
	}

	return result[num - 1];
}

void Solve()
{
	Dp(n);

	cout << Recurtion(n) << " " << countOfDp;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	result[1] = 1;
	result[2] = 1;

	Solve();

	return 0;
}