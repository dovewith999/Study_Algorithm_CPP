#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> bingo(5, vector<int>(5));
vector<int> positions(26);
vector<int> callNumber(25);
vector<vector<bool>> checkBingo(5, vector<bool>(5, false));

int callStack = 0;
int numOfBingo = 0;

void CheckBingoHorizontal()
{
	for (int i = 0; i < 5; ++i)
	{
		bool isBingo = true;
		for (int j = 0; j < 5; ++j)
		{
			if (checkBingo[i][j] == false)
			{
				isBingo = false;
				break;
			}
		}

		if (isBingo == true)
			++numOfBingo;
	}
}

void CheckBingoVertical()
{
	for (int i = 0; i < 5; ++i)
	{
		bool isBingo = true;
		for (int j = 0; j < 5; ++j)
		{
			if (checkBingo[j][i] == false)
			{
				isBingo = false;
				break;
			}
		}

		if (isBingo == true)
			++numOfBingo;
	}
}

void CheckBingoDiagonal()
{
	bool isBingo = true;

	for (int i = 0; i < 5; ++i)
	{
		if (checkBingo[i][i] == false)
		{
			isBingo = false;
			break;
		}
	}

	if (isBingo == true)
		++numOfBingo;
}

void CheckBingoReverseDiagonal()
{
	bool isBingo = true;

	for (int i = 0; i < 5; ++i)
	{
		if (checkBingo[i][4 - i] == false)
		{
			isBingo = false;
			break;
		}
	}

	if (isBingo == true)
		++numOfBingo;
}

void Solve()
{
	for (int i = 0; i < 25; ++i)
		cin >> callNumber[i];

	for (int i = 0; i < 25; ++i)
	{
		++callStack;

		int calledNum = callNumber[i];
		int pos = positions[calledNum];
		checkBingo[pos / 5][pos % 5] = true;

		numOfBingo = 0;
		CheckBingoHorizontal();
		CheckBingoVertical();
		CheckBingoDiagonal();
		CheckBingoReverseDiagonal();

		if (numOfBingo >= 3)
		{
			cout << callStack << '\n';
			return;
		}

	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			int num;
			cin >> num;

			bingo[i][j] = num;
			positions[num] = i * 5 + j;
		}
	}

	Solve();

	return 0;
}