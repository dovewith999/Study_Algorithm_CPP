#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n;
int in;
priority_queue<int> pq;
vector<int> results;

int main() 
{
	cin >> n;

	while (n--) 
	{
		cin >> in;
		if (in == 0) 
		{
			if (pq.empty())
			{
				results.emplace_back(-1);
				continue;
			}
		
			results.emplace_back(pq.top());
			pq.pop();
		}

		else 
		{
			while (in--) 
			{
				int t; 
				cin >> t;
				pq.push(t);
			}
		}
	}

	for(auto& iter : results)
		cout << iter << "\n";

	return 0;
}
