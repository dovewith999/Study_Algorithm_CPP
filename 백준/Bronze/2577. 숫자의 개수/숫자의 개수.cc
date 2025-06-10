#include <iostream>
#include <string>

using namespace std;

int A, B, C;
int counts[10] = {};

void solution()
{
	string result = to_string(A * B * C);

	for (auto& n : result)
	{
		++counts[n - '0']; 
	}

	for (auto& n: counts)
	{
		cout << n << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> A >> B >> C;
;
	solution();
}