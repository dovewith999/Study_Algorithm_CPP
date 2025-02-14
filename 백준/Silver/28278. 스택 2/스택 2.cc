#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack<int> save;
vector<int> results;

void push()
{
	int input;
	cin >> input;
	save.push(input);
}

void pop()
{
	if (!save.empty())
	{
		results.emplace_back(save.top());
		save.pop();
	}

	else
		results.emplace_back(-1);
}

void count()
{
	results.emplace_back(save.size());
}

void empty()
{
	results.emplace_back(save.empty());
}

void top()
{
	if (!save.empty())
	{
		results.emplace_back(save.top());
	}

	else
		results.emplace_back(-1);
}

void FunctionStack(int command)
{
	switch (command)
	{
	case 1:
		push();
		break;
	case 2:
		pop();
		break;
	case 3:
		count();
		break;
	case 4:
		empty();
		break;
	case 5:
		top();
		break;
	default:
		break;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int input;
		cin >> input;

		FunctionStack(input);
	}

	for(auto& iter : results)
		cout << iter << "\n";

	return 0;
}
