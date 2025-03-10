#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> numbers;

int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	while (n--)
	{
		int num;
		cin >> num;
		numbers.emplace_back(num);
	}

	sort(numbers.begin(), numbers.end());

	for(auto& iter : numbers)
		cout << iter << "\n";

	return 0;
}