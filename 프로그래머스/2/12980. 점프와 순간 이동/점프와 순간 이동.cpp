#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int solution(int n)
{
    int ans = 0;
    
    while(n / 2 != 0)
    {
        if(n % 2 == 0)
            n /= 2;
        else
        {
            n -= 1;
            ++ans;
        }
    }
    
    vector<int> dp(n + 1, 0);
    
    dp[1] = 1;
    
    for(int i = 2; i <= n ; ++i)
    {
        if(i % 2 == 1)
        {
            dp[i] = dp[i - 1] + 1;
        }
        
        else
        {
            dp[i] = dp[i / 2];
        }
    }
   
    ans += dp[n];

    return ans;
}