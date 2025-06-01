#include <iostream>
#include <cmath>
using namespace std;

string n;

const int VALUE_C = 26;
const int VALUE_D = 10;

int solution()
{
	int answer = 1;

	if(n[0] == 'c')
		answer *= VALUE_C;

	else if(n[0] == 'd')
		answer *= VALUE_D;

	for (int i = 1; i < n.length(); ++i)
	{
		if (n[i] == 'c')
		{
			if (n[i - 1] == 'c')
			{
				answer *= VALUE_C - 1;
				continue;
			}

			answer *= VALUE_C;
		}

		else if (n[i] == 'd')
		{
			if (n[i - 1] == 'd')
			{
				answer *= VALUE_D - 1;
				continue;
			}

			answer *= VALUE_D;
		}
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	cout << solution();
}  