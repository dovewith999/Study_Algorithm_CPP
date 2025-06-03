#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string N;
int M;

bool isErrorButton(int num, const vector<int>& errorNum) 
{
	return find(errorNum.begin(), errorNum.end(), num) != errorNum.end();
}

int canMakeChannel(int channel, const vector<int>& errorNum) 
{
	if (channel == 0) 
		return isErrorButton(0, errorNum) ? -1 : 1;

	int buttonCount = 0;
	int temp = channel;

	while (temp > 0) 
	{
		int digit = temp % 10;
		
		if (isErrorButton(digit, errorNum)) 
			return -1;
		
		buttonCount++;
		temp /= 10;
	}

	return buttonCount;
}

int solution()
{
	int answer = 0;
	int startNum = 100;

	vector<int> errorNum(M, 0);
	
	for (int i = 0; i < M; ++i)
		cin >> errorNum[i];

	answer = abs(stoi(N) - startNum);
	
	for (int i = 0; i <= 10000000; ++i)
	{
		int buttonCount = canMakeChannel(i, errorNum);

		if (buttonCount != -1) 
		{ 
			int totalButtons = buttonCount + abs(stoi(N)- i);

			answer = min(answer, totalButtons);
		}
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;
	cin >> M;

	cout << solution();
}  