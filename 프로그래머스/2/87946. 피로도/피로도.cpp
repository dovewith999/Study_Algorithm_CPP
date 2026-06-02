#include <bits/stdc++.h>
using namespace std;

int answer = 0;
int n;

void dfs(vector<vector<int>>& dungeons, vector<bool>& visited, int hp, int count) {
    answer = max(answer, count);
    
    for (int i = 0; i < n; ++i) 
    {
        if (visited[i]) continue;
        
        if (hp < dungeons[i][0]) 
            continue;
        
        visited[i] = true;                       
        dfs(dungeons, visited, hp - dungeons[i][1], count + 1); 
        visited[i] = false;                      
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    
    n = dungeons.size();
    vector<bool> visited(n, false);
    dfs(dungeons, visited, k, 0);
    
    return answer;
}