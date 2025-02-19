#include <iostream>
#include <vector>
#define MAX 21

using namespace std;

string str = "";
int m, x;
int arr[MAX] = { 0 };

unsigned int s;

void Set(string command)
{
	if (command == "add")
	{
		cin >> x;
		s |= (1 << x);
	}

	else if (command == "remove")
	{
		cin >> x;
		s &= ~(1 << x);
	}

	else if (command == "check")
	{
		cin >> x;
		if (s & (1 << x)) 
			cout << 1 << '\n';

		else 
			cout << 0 << '\n';
	}

	else if (command == "toggle")
	{
		cin >> x;
		s ^= (1 << x);
	}

	else if (command == "all")
	{
		s = (1 << 21) - 1;
	}

	else if (command == "empty")
		s = 0;
}

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m;

	for(int i = 0; i < m; ++i)
	{
		cin >> str;
		Set(str);
	}

	return 0;
}