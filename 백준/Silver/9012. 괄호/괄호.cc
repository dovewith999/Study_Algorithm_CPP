#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;

vector<string> answer;

void Solve()
{
	for (int i = 0; i < N; ++i)
	{
		string input;
		cin >> input;

		stack<char> psStack;
		bool isNotVPS = false;

		for (int j = 0; j < input.length(); ++j)
		{
			if(input[j] == '(')
				psStack.push(input[j]);

			else
			{
				if (psStack.empty())
				{
					isNotVPS = true;
					break;
				}

				else
					psStack.pop();
			}
		}

		if(isNotVPS == false && psStack.empty())
			answer.emplace_back("YES");

		else
			answer.emplace_back("NO");
	}

	for (auto& iter : answer)
	{
		cout << iter << '\n';
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;

	Solve();

	return 0;
}