#include <string>
#include <vector>
#include <queue>
using namespace std;

int dir_x[4] = {1, -1, 0, 0};
int dir_y[4] = {0, 0, 1, -1};

void DeleteOne(vector<string>& storage, char c)
{
    int rows = storage.size();
    int cols = storage[0].length();
    
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    queue<pair<int, int>> q;
    
    // 가장자리에서 목표 문자 또는 빈 공간인 경우만 시작점으로 추가
    for(int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                if((storage[i][j] == c || storage[i][j] == ' ') && !visited[i][j])
                {
                    q.push({j, i});
                    visited[i][j] = true; // 큐에 넣을 때 방문 체크
                }
            }
        }
    }
    
    while(!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
    
        // 목표 문자라면 제거
        if(storage[y][x] == c)
        {
            storage[y][x] = ' ';
            continue;
        }
        
        if(storage[y][x] == ' ')
        {
            for(int i = 0; i < 4; ++i)
            {
                int newX = x + dir_x[i];
                int newY = y + dir_y[i];
            
                // 범위 체크
                if(newX < 0 || newY < 0 || newX >= cols || newY >= rows)
                continue;
            
                // 이미 방문했거나, 탐색할 수 없는 위치면 스킵
                if(visited[newY][newX])
                    continue;
            
                visited[newY][newX] = true; // 큐에 넣기 전에 방문 체크
                q.push({newX, newY});
            }
        }
    }
}

void DeleteAll(vector<string>& storage, char c)
{
    for(int i = 0; i < storage.size(); ++i)
    {
        for(int j = 0; j < storage[0].length(); ++j)
        {
            if(storage[i][j] == c)
            {
                storage[i][j] = ' ';
            }
        }
    }
}

int solution(vector<string> storage, vector<string> requests) {
    for(const string& request : requests)
    {
        if(request.length() == 1) // 지게차
        {
            DeleteOne(storage, request[0]);
        }
        else // 크레인
        {
            DeleteAll(storage, request[0]);
        }
    }
    
    int answer = 0;
    for(const string& row : storage)
    {
        for(char ch : row)
        {
            if(ch != ' ')
            {
                ++answer;
            }
        }
    }
    
    return answer;
}