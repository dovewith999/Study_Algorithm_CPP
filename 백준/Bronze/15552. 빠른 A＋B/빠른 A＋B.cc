#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int numOfTestCase = 0;
	cin >> numOfTestCase;

	vector<int> sums;

	for (int i = 0; i < numOfTestCase; ++i)
	{
		int a = 0, b = 0;
		cin >> a >> b;

		int sum = a + b;

		sums.emplace_back(sum);
	}

	for (int result : sums)
		cout << result << '\n';

	return 0;
}