#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<int, pair<int, int>> results;

pair<int, int> Func_Fibonacci(int n)
{
	if (n == 0) 
		return {1, 0};
	
	else if (n == 1) 
		return {0, 1};

	if(results.count(n) == 0 )
		results[n] = { Func_Fibonacci(n - 1).first + Func_Fibonacci(n - 2).first, Func_Fibonacci(n - 1).second + Func_Fibonacci(n - 2).second };

	return results[n] ;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	vector<pair<int, int>> outputs;

	for (int i = 0; i < n; ++i)
	{
		int testcase = 0;
		cin >> testcase;
		outputs.emplace_back(Func_Fibonacci(testcase));
	}

	for(auto& iter : outputs)
		cout << iter.first << " " << iter.second << "\n";

	return 0;
}