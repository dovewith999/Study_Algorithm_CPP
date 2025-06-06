#include <iostream>

using namespace std;

int T, paymoney;

void Solve()
{
	while (T--)
	{
		int Q = 0, D = 0, N = 0, P = 0;

		cin >> paymoney;

		while (paymoney)
		{
			if (paymoney >= 25)
			{
				Q++;
				paymoney -= 25;
			}
			else if (paymoney >= 10)
			{
				D++;
				paymoney -= 10;
			}
			else if (paymoney >= 5)
			{
				N++;
				paymoney -= 5;
			}
			else
			{
				P++;
				paymoney -= 1;
			}
		}
		cout << Q << " " << D << " " << N << " " << P << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> T;

	Solve();

	return 0;
}