#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, k;

vector<int> arr;

bool desc(int x, int y)
{
	return x > y;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> k;

	for (int i = 0; i < N; ++i)
	{
		int input;
		cin >> input;
		arr.emplace_back(input);
	}

	sort(arr.begin(), arr.end(), desc);

	cout << arr[k - 1] << "\n";

	return 0;
}