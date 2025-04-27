#include <iostream>

#define MAX 100001

using namespace std;

int N;
int price[MAX];
int dist[MAX];

int priceAcc = 0;

void Solve()
{

	for(int i = 0; i < N - 1; ++i)
	{
		if (price[i] < price[i + 1])
			price[i + 1] = price[i];

			priceAcc += price[i] * dist[i];
	}

	cout << priceAcc << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	for (int i = 0; i < N - 1; ++i)
		cin >> dist[i];

	for (int i = 0; i < N; ++i)
		cin >> price[i];

	Solve();

	return 0;
}