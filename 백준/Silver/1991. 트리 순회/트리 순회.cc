#include <iostream>
#include <map>

using namespace std;

struct Node
{
	char left;
	char right;
};

map<char, Node> tree;
int N;

void PreOrder(char node)
{
	if(node == '.')
		return;
    
	cout << node;
	PreOrder(tree[node].left);
	PreOrder(tree[node].right);
}

void InOrder(char node)
{
	if (node == '.')
		return;

	InOrder(tree[node].left);
	cout << node;
	InOrder(tree[node].right);
}

void PostOrder(char node)
{
	if (node == '.')
		return;

	PostOrder(tree[node].left);
	PostOrder(tree[node].right);
	cout << node;
}

void Solve()
{
	for (int i = 0; i < N; ++i)
	{
		char root, nodeL, nodeR;

		cin >> root >> nodeL >> nodeR;

		tree[root].left = nodeL;
		tree[root].right = nodeR;
	}

	PreOrder('A');
	cout << "\n";
	InOrder('A');
	cout << "\n";
	PostOrder('A');
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