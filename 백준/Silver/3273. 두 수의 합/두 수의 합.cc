#include <iostream>
#include <vector>

#define MAX 2000001

using namespace std;

int n;
int x;

vector<int> numbers;
bool isNumber[MAX] = {};

void solution()
{
	int cnt = 0;
	for (auto& num : numbers)
	{
		int target = x - num;

		if (target >= 0 && target < MAX && target != num && isNumber[target])
			++cnt;
	}

	cout << cnt / 2;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int num;
		cin >> num;
		numbers.push_back(num);
		isNumber[num] = true;
	}

	cin >> x;

	solution();
}