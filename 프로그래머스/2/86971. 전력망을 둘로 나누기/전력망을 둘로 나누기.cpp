#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int n, vector<vector<int>> wires) {
    int answer = n;
    
    vector<vector<int>> graph(n + 1);
    for(auto& wire : wires)
    {
        graph[wire[0]].emplace_back(wire[1]);
        graph[wire[1]].emplace_back(wire[0]);
    }
    
    for(int i = 0; i < (int)wires.size(); ++i)
    {
        int cutA = wires[i][0];
        int cutB = wires[i][1];
        
        vector<bool> visited(n + 1, false);
        queue<int> q;
        q.push(1);
        visited[1] = true;
        int count = 0;
        
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
            ++count;
            
            for(int next : graph[cur])
            {
                if(visited[next])
                    continue;
                
                if((cur == cutA && next == cutB) ||
                  (cur == cutB && next == cutA))
                    continue;
                
                visited[next] = true;
                q.push(next);
            }
        }
        
        int diff = abs(count - (n - count));
        answer = min(answer, diff);
    }
    
    
    return answer;
}