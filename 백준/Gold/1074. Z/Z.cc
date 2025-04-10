#include <iostream>

using namespace std;

int N, r, c;
int result = 0;

void Solution(int x, int y, int size)
{
	if (c == x && y == r)
	{
		cout << result << "\n";
		return;
	}

	if (c < x + size && r < y + size && c >= x && r >= y)
	{
		Solution(x, y, size / 2);
		Solution(x + size /2, y, size / 2);
		Solution(x, y + size / 2, size / 2);
		Solution(x + size / 2, y + size / 2, size / 2);
	}

	else 
		result += size * size;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> r >> c;

	Solution(0, 0, (1 << N)); // 솔루션 함수 만들기 연습

	return 0;
}