#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> arr;
vector<int> temp;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
		arr.emplace_back(i + 1);

	for (int i = 0; i < arr.size(); ++i)
	{
		if (i < M)
			temp.emplace_back(1);
		else
			temp.emplace_back(0);
	}

	do
	{
		for (int i = 0; i < arr.size(); ++i)
		{
			if(temp[i] == 1)
				cout << arr[i] << " ";
		}

		cout << "\n";
	} while (prev_permutation(temp.begin(), temp.end()));

	return 0;
}