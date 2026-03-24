#include <iostream>
#include <vector>

using namespace std;

vector<int> results;

int GCD(int a, int b)
{
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int LCM(int a, int b)
{
	int gcd = 0;

	gcd = GCD(a, b);

	return abs(a * b) / gcd;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int A, B, lcm;
		cin >> A >> B;

		lcm = LCM(A, B);
		results.emplace_back(lcm);
	}

	for(auto& iter : results)
		cout << iter << "\n";

	return 0;
}
