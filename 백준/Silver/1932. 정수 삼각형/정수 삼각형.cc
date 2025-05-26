#include <iostream>
#include <algorithm>

int Triangle[500][500];
int Tri_DP[500][500];

int main()
{
	int N;

	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cin >> Triangle[i][j];
		}
	}

	Tri_DP[0][0] = Triangle[0][0];

	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0)
			{
				Tri_DP[i][j] = Tri_DP[i - 1][j] + Triangle[i][j];
			}

			else if (j == i)
			{
				Tri_DP[i][j] = Tri_DP[i - 1][j - 1] + Triangle[i][j];
			}

			else
			{
				Tri_DP[i][j] = std::max(Tri_DP[i - 1][j - 1], Tri_DP[i - 1][j])
					+ Triangle[i][j];
			}
		}
	}

	int MaxValue = 0;

	for (int i = 0; i < N; i++)
	{
		if (Tri_DP[N - 1][i] >= MaxValue)
		{
			MaxValue = Tri_DP[N - 1][i];
		}
	}

	std::cout << MaxValue << std::endl;

	return 0;
}