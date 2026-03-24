#include <iostream>
#include <algorithm>

using namespace std;

string num;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> num;
	sort(num.begin(), num.end(), greater<char>());
	cout << num << '\n';

	return 0;
}