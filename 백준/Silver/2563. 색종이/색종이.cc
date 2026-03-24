#include <iostream>

#define MAX 101

using namespace std;

int rect[MAX][MAX] = { 0 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int w, h;
		cin >> w >> h;

		for (int i = w, j = h; i < w + 10;)
		{
			rect[i][j] = 1;

			if(j < h + 9)
				++j;

			else if (i < w + 10)
			{
				++i;
				j = h;
			}
		}
	}

	int extent = 0;

	for(int i = 0; i < MAX; ++i)
	{
		for (int j = 0; j < MAX; ++j)
		{
			if(rect[i][j] == 1)
				++extent;
		}
	}

	cout << extent << "\n";

	return 0;
}