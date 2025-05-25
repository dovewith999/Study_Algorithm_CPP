#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    vector<vector<int>> graph(n + 1);
    
    for(auto& e : edge)
    {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }
    
    vector<int> distance(n + 1, -1);
    
    queue<int> q;
    
    distance[1] = 0;
    
    q.push(1);
    
    while(!q.empty())
    {
        int currentDepth = q.front();
        q.pop();
        
        for(auto& node : graph[currentDepth])
        {
            if(distance[node] == -1)
            {
                distance[node] = distance[currentDepth] + 1;
                q.push(node);
            }
        }
    }
    
    int far = *max_element(distance.begin(), distance.end());
    
    for(int i = 0; i < distance.size(); ++i)
    {
        if(distance[i] == far)
        {
            answer++;
        }
    }
    
    return answer;
}