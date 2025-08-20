#include <string>
#include <vector>

using namespace std;

int GetCountOne(int n)
{
    int cnt = 0;
    while(n != 0)
    {
        if(n % 2 == 1)
        {
            ++cnt;
        }
        
        n /= 2;
    }
    
    return cnt;
}

int solution(int n) {
    int answer = 0;
    int cntOne = 0;
    
    cntOne = GetCountOne(n);
    
    for(int i = n + 1; i < 1000000; ++i)
    {
        if(cntOne == GetCountOne(i))
        {
            answer = i;
            break;
        }
    }
    
    return answer;
}