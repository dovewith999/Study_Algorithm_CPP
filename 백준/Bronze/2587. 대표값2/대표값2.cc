#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> inputs;
int inputAcc = 0;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 5; ++i)
	{
		int n;
		cin >> n;
		inputAcc += n;

		inputs.emplace_back(n);
	}
	
	sort(inputs.begin(), inputs.end());

	cout << inputAcc / 5 << '\n';
	cout << inputs[2] << '\n';

	return 0;
}
