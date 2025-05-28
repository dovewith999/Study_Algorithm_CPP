#include <iostream>

using namespace std;

int n;

int solution(int k)
{
	int answer;

	answer = k * (k - 1);

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	cout << solution(n);
}