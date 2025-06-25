#include <iostream>
#include <queue>

#define MAX 501

using namespace std;

int n, m;

int arr[MAX][MAX];
bool chk[MAX][MAX]; // 방문 여부 

int area = 0; // 그림의 넓이 
int max_ext = 0;
int num = 0; // 그림의 개수 

void solution()
{
	queue<pair<int, int> > Q;


	int dx[4] = { 1,0,-1,0 };
	int dy[4] = { 0,1,0,-1 };

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j) 
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; ++i) 
	{
		for (int j = 0; j < m; ++j) 
		{

			if (chk[i][j] || arr[i][j] == 0)
				continue;

			chk[i][j] = 1;
			Q.push({ i,j });
			area = 0;
			num++;

			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();

				area++;

				for (int dir = 0; dir < 4; ++dir)
				{
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;

					if (chk[nx][ny] || arr[nx][ny] == 0)
						continue;

					chk[nx][ny] = 1;
					Q.push({ nx,ny });
				}

				if (max_ext < area)
					max_ext = area;
			}
		}
	}

	cout << num << "\n" << max_ext;
}

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> n >> m;

	solution();
}