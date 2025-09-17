#include <string>
#include <vector>

#define MAX 2001
#define ll long long

ll dp[MAX] = {0};
using namespace std;

ll solution(int n) {
    ll answer = 0;
    
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i  = 3; i <= n; ++i)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1234567;
    }
    
    answer = dp[n];
    
    return answer;
}