#include <iostream>

using namespace std;

int x, y, w, h;

int solution()
{
	int answer = 0;

	answer = x;

	if(answer > y)
		answer = y;

	if(answer > w - x)
		answer = w - x;

	if(answer > h - y)
		answer = h - y;

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> x >> y >> w >> h;

	cout << solution();
}  