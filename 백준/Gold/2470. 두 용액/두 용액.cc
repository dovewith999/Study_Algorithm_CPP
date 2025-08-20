#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<int> vec;

int minValue = 0x7FFFFFFF;

vector<int> solution()
{
	vector<int> answer;

	int left = 0;	
	int right = N - 1;

	int answerLeft = 0;
	int	answerRight = 0;


	while (left < right)
	{
		int compareValue = abs(vec[left] + vec[right]);
		if (compareValue < minValue)
		{
			answerLeft = vec[left];
			answerRight = vec[right];

			minValue = compareValue;
		}

		if (vec[left] + vec[right] < 0)
		{
			++left;  // 합이 음수면 더 큰 값이 필요
		}
		else
		{
			--right; // 합이 양수면 더 작은 값이 필요
		}
	}
	
	answer.emplace_back(answerLeft);
	answer.emplace_back(answerRight);

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

    cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int input;
		cin >> input;
		vec.push_back(input);
	}

	sort(vec.begin(), vec.end());

    vector<int> answer = solution();

	for (int iter : answer)
		cout << iter << " ";	

	return 0;
}