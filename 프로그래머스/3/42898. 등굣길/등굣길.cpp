#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    
    vector<vector<int>>dp(m + 1, vector<int>(n + 1, 0));
    
    dp[1][1] = 1;
    
    set<pair<int, int>> puddleSet;
    
    for(auto& puddle : puddles)
        puddleSet.insert({puddle[0], puddle[1]});
    
    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            if(i == 1 && j == 1)
                continue;
            
           if(puddleSet.find({i, j}) != puddleSet.end())
           {
                dp[i][j] = 0;
                continue;
            }
            
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 1000000007;
        }
    }
    
    answer = dp[m][n];
    
    return answer;
}