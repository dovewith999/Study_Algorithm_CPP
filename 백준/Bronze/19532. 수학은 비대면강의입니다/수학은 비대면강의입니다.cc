#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int result_X = 0;
	int result_Y = 0;

	for (int x = -999; x <= 999; ++x)
	{
		for (int y = -999; y <= 999; ++y)
		{
			int ax = a * x;
			int by = b * y;
			int dx = d * x;
			int ey = e * y;

			if (ax + by == c && dx + ey == f)
			{
				result_X = x;
				result_Y = y;
				break;
			}
		}
	}

	cout << result_X << " " << result_Y << '\n';

	return 0;
}
