#include <iostream>

using namespace std;

int solution(int k)
{
	int answer = 1;

	for (int i = 0; i < 5; ++i)
	{
		answer = answer * (k - i) / (i + 1);
	}

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;

	cin >> n;

	cout << solution(n);
}