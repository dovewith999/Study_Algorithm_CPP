#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> numbers;

int t1, t2;

void CalcNum(int n1, int n2)
{
	if (n1 > n2 && n1 % n2 == 0)
	{
		cout << "multiple" << "\n";
		return;
	}

	else if(n1 < n2 && n2 % n1 == 0)
	{
		cout << "factor" << "\n";
		return;
	}

	cout << "neither" << "\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		cin >> t1 >> t2;
		if(t1 == 0 && t2 == 0)
			break;

		numbers.emplace_back(t1, t2);
	} 

	for (int i = 0; i < numbers.size(); ++i)
		CalcNum(numbers[i].first, numbers[i].second);

	return 0;
}
