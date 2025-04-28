#include <iostream>

using namespace std;

int a1, b1, a2, b2;
int a3, b3;

void Solve()
{
	int a = a3, b = b3;
	int r = a % b;

	while (r != 0) 
	{
		r = a % b;
		a = b;
		b = r;
	}

	cout << b3 / a << " " << a3 / a << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> b1 >> a1;
	cin >> b2 >> a2;

	a3 = a1 * a2;
	b3 = (b1 * a2) + (b2 * a1);

	Solve();

	return 0;
}