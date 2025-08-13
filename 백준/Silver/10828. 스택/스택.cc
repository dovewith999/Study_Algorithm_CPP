#include <iostream>
#include <string>
#include <stack>

using namespace std;

int N = 0;
stack<int> s;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);	

	cin >> N;

	while (N--)
	{
		string order;
		cin >> order;

		if (order == "push")
		{
			int n = 0;
			cin >> n;
			s.push(n);
		}

		else if (order == "pop")
		{
			if(s.empty())
				cout << "-1\n";

			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}

		else if (order == "top")
		{
			if (s.empty())
				cout << "-1\n";

			else
				cout << s.top() << "\n";
		}

		else if (order == "size")
			cout << s.size() << "\n";

		else if (order == "empty")
			cout << s.empty() << "\n";
	}

	return 0;
}