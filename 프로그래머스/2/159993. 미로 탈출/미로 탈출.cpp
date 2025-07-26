#include <string>
#include <vector>
#include <queue>

using namespace std;

int dir_x[4] = {1, -1, 0, 0};
int dir_y[4] = {0, 0, 1, -1};

int answer = -1;
    
void bfs(int startX, int startY, vector<string>& maps)
{
    vector<vector<int>> visited(maps.size(), vector<int>(maps[0].size(), 0));
    
    queue<pair<int, int>> q;
    q.push({startX, startY});
    
    bool pullLever = false;
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        if(pullLever && maps[x][y] == 'E')
        {
            answer = visited[x][y];
            break;
        }
        
        else if (!pullLever && maps[x][y] == 'L')
        {
            pullLever = true;
            int currentNum = visited[x][y];
            q = queue<pair<int, int>>();
            
            fill(visited.begin(), visited.end(), vector<int>(visited[0].size(), 0));
            
            visited[x][y] = currentNum;
        }
        
        for(int i = 0; i < 4; ++i)
        {
            int newX = x + dir_x[i];
            int newY = y + dir_y[i];
            
            if(newX >= maps.size() || newY >= maps[0].size()
               || newX < 0 || newY < 0 || 
               visited[newX][newY] > 0 || 
               maps[newX][newY] == 'X')
                continue;
            
            visited[newX][newY] = visited[x][y] + 1;
            q.push({newX, newY});
        }
    }
}

int solution(vector<string> maps) {

    for(int i = 0; i < maps.size(); ++i)
    {
        for(int j = 0; j < maps[i].size(); ++j)
        {
            if(maps[i][j] == 'S')
            {
                bfs(i, j, maps);
            }
        }
    }
    
    return answer;
}