#include <iostream>
#include <cmath>

using namespace std;

int solution(int k)
{
	int answer = 1;

	answer = pow(2, k);

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