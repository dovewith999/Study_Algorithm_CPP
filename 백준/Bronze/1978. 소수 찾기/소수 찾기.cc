#include <iostream>

using namespace std;

int n;
int countOfRemain = 0;
int decimal = 0;

void Solve()
{
	int* num = new int[n + 1];

	for (int i = 0; i < n; ++i)
		cin >> num[i];

	for (int i = 0; i < n; ++i)
	{
		if (num[i] == 1)
			continue;

		else if (num[i] == 2)
		{
			++decimal;
			continue;
		}

		for (int j  = 2; j < num[i]; ++j)
		{
			if (num[i] % j == 0)
			{
				++countOfRemain;
				break;
			}
		}

		if (countOfRemain == 0)
			++decimal;

		countOfRemain = 0;

	}

	cout << decimal << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	Solve();

	return 0;
}