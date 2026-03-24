#include <iostream>
#include <vector>

#define MAX 601

using namespace std;

int H, W, X, Y;
int arr[MAX][MAX] = { 0 };

void Solution()
{
	for (int i = X; i < H; ++i)
	{
		for (int j = Y; j < W; ++j)
		{
			arr[i][j] -= arr[i - X][j - Y];
		}
	}

	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			cout << arr[i][j] << " ";
		}

		cout << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> H >> W >> X >> Y;

	for (int i = 0; i < H + X; ++i)
	{
		for (int j = 0; j < W + Y; ++j)
		{
			cin >> arr[i][j];
		}
	}

	Solution(); // 솔루션 함수 만들기 연습

	return 0;
}