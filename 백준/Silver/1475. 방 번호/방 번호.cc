#include <iostream>
#include <string>

using namespace std;

string N;
int counts[10] = {};

void solution()
{
	for (char& c : N)
		++counts[c - '0'];

	int answer = 0;

	for (int i = 0; i < 10; ++i)
	{
		if(i == 6 || i == 9)
			continue;

		if (answer < counts[i])
			answer = counts[i];
	}	

	answer = max(answer, (counts[6] + counts[9] + 1) / 2);

	cout << answer << '\n';
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> N;

	solution();
}