#include <iostream>
#include <string>

using namespace std;

string word1, word2;
int arr[2][26], cnt;

void solution()
{
	for (char c : word1)
		arr[0][c - 'a']++;

	for (char c : word2)
		arr[1][c - 'a']++;

	for (int i = 0; i < 26; ++i)
		cnt += abs(arr[0][i] - arr[1][i]);

	cout << cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> word1;
	cin >> word2;

	solution();
}