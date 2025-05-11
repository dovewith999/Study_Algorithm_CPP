#include <iostream>

using namespace std;

int n;

int Solve(int num) 
{
	if (num == 0) 
		return 0;

	else if (num == 1) 
		return 1;

	return Solve(num - 2) + Solve(num - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	cout << Solve(n);

	return 0;
}