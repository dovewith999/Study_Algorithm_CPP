#include <vector>
#include <queue>

using namespace std;

int dir_X[4] = {-1, 1, 0, 0};
int dir_Y[4] = {0, 0, 1, -1};
int answer;

queue<pair<int, int>> q;

void bfs(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    
    vector<vector<int>> visitDepth(n, vector<int>(m, 0));
    queue<pair<int, int>> q;
    
    visitDepth[0][0] = 1;
    q.push({0, 0});
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; ++i) {
            int newX = x + dir_X[i];
            int newY = y + dir_Y[i];
            
            if(newX < 0 || newY < 0 || newX >= n || newY >= m || 
               maps[newX][newY] == 0 || visitDepth[newX][newY] != 0)
                continue;
            
            visitDepth[newX][newY] = visitDepth[x][y] + 1;
            q.push({newX, newY});
        }
    }
    
    answer = visitDepth[n-1][m-1] > 0 ? visitDepth[n-1][m-1] : -1;
}

int solution(vector<vector<int> > maps)
{
    q.push({0, 0});
    
    bfs(maps);
    
    return answer;
}