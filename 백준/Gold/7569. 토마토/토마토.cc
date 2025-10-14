#include <iostream>
#include <queue>
#include <tuple>
#define MAX 101
using namespace std;

int M, N, H;  // M=가로(X), N=세로(Y), H=높이(Z)
int map[MAX][MAX][MAX];
int dir_X[6] = { 1, -1, 0, 0, 0, 0 };
int dir_Y[6] = { 0, 0, 1, -1, 0, 0 };
int dir_Z[6] = { 0, 0, 0, 0, 1, -1 };

void solution(queue<tuple<int, int, int>>& q)
{
    while (!q.empty())
    {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int z = get<2>(q.front());
        q.pop();

        for (int i = 0; i < 6; ++i)
        {
            int nx = x + dir_X[i];
            int ny = y + dir_Y[i];
            int nz = z + dir_Z[i];

            if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H)
                continue;
            if (map[nx][ny][nz] != 0)
                continue;

            map[nx][ny][nz] = map[x][y][z] + 1;
            q.push(make_tuple(nx, ny, nz));
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> M >> N >> H;

    queue<tuple<int, int, int>> q;

    // 입력: H개 층, 각 층마다 N개 행, 각 행마다 M개 값
    for (int z = 0; z < H; ++z)
    {
        for (int y = 0; y < N; ++y)
        {
            for (int x = 0; x < M; ++x)
            {
                cin >> map[x][y][z];
                if (map[x][y][z] == 1)
                {
                    q.push(make_tuple(x, y, z));
                }
            }
        }
    }

    solution(q);

    int maxDay = 0;
    for (int z = 0; z < H; ++z)
    {
        for (int y = 0; y < N; ++y)
        {
            for (int x = 0; x < M; ++x)
            {
                if (map[x][y][z] == 0)
                {
                    cout << -1 << "\n";
                    return 0;
                }
                maxDay = max(maxDay, map[x][y][z]);
            }
        }
    }

    cout << maxDay - 1 << "\n";
    return 0;
}