#include <iostream>

using namespace std;

int num[9];
int maxValue = -1;
int maxValueIndex;

void Solve()
{
	for (int i = 0; i < 9; ++i) 
	{
		if (num[i] > maxValue)
		{
			maxValue = num[i];
			maxValueIndex = i;
		}
	}

	cout << maxValue << "\n";

	cout << maxValueIndex + 1;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 0; i < 9; ++i)
		cin >> num[i];

	Solve();

	return 0;
}