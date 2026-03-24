#include <iostream>
#include <queue>

int main()
{
	int N = 0;
	std::cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int Count = 0;
		int NumOfDoc = 0, CurrnetPos = 0;

		std::queue<std::pair<int, int>> q;
		std::priority_queue<int> pq;

		std::cin >> NumOfDoc >> CurrnetPos;
		for (int j = 0; j < NumOfDoc; ++j)
		{
			int Prior;
			std::cin >> Prior;

			q.push({j, Prior});
			pq.push(Prior);
		}

		while (!q.empty())
		{
			int Idx = q.front().first;
			int Priority = q.front().second;
			q.pop();

			if (Priority == pq.top())
			{
				pq.pop();
				++Count;
				if (Idx == CurrnetPos)
				{
					std::cout << Count << std::endl;
					break;
				}
			}

			else
			{
				q.push({ Idx, Priority });
			}

		}
	}
	
	return 0;
}