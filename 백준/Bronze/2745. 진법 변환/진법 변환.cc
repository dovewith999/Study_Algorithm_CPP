#include <iostream>
#include <string>

using namespace std;

string s;
int b, sum = 0;

int Solve() 
{
	for (int i = 0; i < s.size(); ++i)
	{	
		if (s[i] >= '0' && s[i] <= '9') 
			sum = sum * b + (s[i] - 48);	
		else
			sum = sum * b + (s[i] - 65 + 10);
	}

	cout << sum;

	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> s >> b;

	Solve();

	return 0;
}