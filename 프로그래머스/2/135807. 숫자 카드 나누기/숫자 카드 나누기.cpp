#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<int> arrayA, vector<int> arrayB) 
{
    int answer = 0;
    int num = arrayA[0];
;
    
    for (int i = 1; i < arrayA.size(); ++i) 
    {
        num = gcd(num, arrayA[i]);
        if(num == 1)
            break;
    }
    
    for(int i = 0; i < arrayB.size(); ++i)
    {
        if(arrayB[i] % num == 0)
        {
            num = 0;
            break;
        }
    }
    
    answer = num;
    
    num = arrayB[0];
    for (int i = 1; i < arrayB.size(); ++i) 
    {
        num = gcd(num, arrayB[i]);
        if(num == 1)
            break;
    }
    
    for(int i = 0; i < arrayA.size(); ++i)
    {
        if(arrayA[i] % num == 0)
        {
            num = 0;
            break;
        }
    }
    
    answer = max(answer ,num);
    
    return answer;
}