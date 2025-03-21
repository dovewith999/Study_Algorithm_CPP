#include <iostream>

#define MAX 129
using namespace std;

int N;

int paper[MAX][MAX];

int numOfBluePaper = 0;
int numOfWhitePaper = 0;

void DividePaper(int x, int y, int n)
{
	if (n == 1)
	{
		if (paper[x][y] == 0)
			++numOfWhitePaper;
		else
			++numOfBluePaper;

		return;
	}

	int startNum = paper[x][y];
	bool bCut = false;

	for (int i = x; i < x + n; ++i)
	{
		for (int j = y; j < y + n; ++j)
		{
			if (startNum != paper[i][j])
			{
				bCut = true;
				break;
			}
		}

		if (bCut)
			break;
	}

	if (bCut == true)
	{
		DividePaper(x, y, n / 2);
		DividePaper(x + n / 2, y, n / 2);
		DividePaper(x, y + n / 2, n / 2);
		DividePaper(x + n / 2, y + n / 2, n / 2);
	}

	else
	{
		if (startNum == 0)
			++numOfWhitePaper;

		else if (startNum == 1)
			++numOfBluePaper;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> paper[i][j];
		}
	}

	DividePaper(0, 0, N);

	cout << numOfWhitePaper << '\n';
	cout << numOfBluePaper << '\n';

	return 0;
}