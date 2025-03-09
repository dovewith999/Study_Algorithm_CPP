#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers;

int n1, n2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n1 >> n2;

	for (int i = 1; i <= n1 / 2; ++i)
	{
		if(n1 % i == 0)
			numbers.emplace_back(i);
	}

	numbers.emplace_back(n1);

	int output = 0;

	if(numbers.size() >= n2)
		output = numbers[n2 - 1];

	cout << output << "\n";

	return 0;
}
