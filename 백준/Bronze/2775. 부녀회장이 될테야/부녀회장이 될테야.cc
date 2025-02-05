#include <iostream>
#include <vector>
using namespace std;

int apt[101][15];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int inputOfTestCase = 0;
	cin >> inputOfTestCase;

	vector<int> results;

	while (inputOfTestCase--) {
		// k <= 1, n <= 14  
		int k, n;
		cin >> k >> n;

		for (int i = 0; i <= k; i++) 
		{
			for (int j = 1; j <= n; j++) 
			{
				if (i == 0) 
					apt[0][j] = j;
				
				else if (j == 1) 
					apt[i][1] = 1;
				
				else 
					apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
			}
		}

		results.emplace_back(apt[k][n]);
	}

	for (auto iter : results)
	{
		cout << iter << "\n";
	}

	return 0;
}