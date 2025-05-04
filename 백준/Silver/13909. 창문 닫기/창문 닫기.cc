#include <iostream>

using namespace std;

int N;
int num = 0;

void Solve()
{
	for (int i = 1; i * i <= N; ++i)
		num++;

	std::cout << num;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	Solve();

	return 0;
}