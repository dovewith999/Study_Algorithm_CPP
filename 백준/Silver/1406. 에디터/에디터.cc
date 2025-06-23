#include <iostream>
#include <string>
#include <list>

using namespace std;

string s;
int M;

list<char>::iterator cursor;
list<char> l;

void Order(char input)
{
	if (input == 'L')
	{
		if (cursor == l.begin())
			return;

		--cursor;
	}

	else if (input == 'D')
	{
		if (cursor == l.end())
			return;

		++cursor;
	}

	else if (input == 'B')
	{
		if(cursor == l.begin())
			return;

		--cursor;
		cursor = l.erase(cursor);

	}

	else if (input == 'P')
	{
		char addChar;
		cin >> addChar;

		l.insert(cursor, addChar);
	}
}

void solution()
{
	char input;

	for(char c : s)
		l.push_back(c);

	cursor = l.end();

	while (M--)
	{
		cin >> input;
		Order(input);
	}

	for (auto c : l)
		cout << c;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> s;
	cin >> M;

	solution();
}