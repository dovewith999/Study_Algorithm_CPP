#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    for(int i = 1; i <= n; ++i)
    {
        if(find(lost.begin(), lost.end(), i) != lost.end())
        {
            if(find(reserve.begin(), reserve.end(), i) != reserve.end())
            {
                ++answer;
                reserve.erase(remove(reserve.begin(), reserve.end(), i), reserve.end());
                lost.erase(remove(lost.begin(), lost.end(), i), lost.end());
            }
            
             else if(find(reserve.begin(), reserve.end(), i - 1) != reserve.end() && find(lost.begin(), lost.end(), i - 1) == lost.end())
            {
               ++answer;
               reserve.erase(remove(reserve.begin(), reserve.end(), i - 1), reserve.end());
               lost.erase(remove(lost.begin(), lost.end(), i - 1), lost.end());
            }
 
                
            else if(find(reserve.begin(), reserve.end(), i + 1) != reserve.end() && find(lost.begin(), lost.end(), i + 1) == lost.end())
            {
                ++answer;
                reserve.erase(remove(reserve.begin(), reserve.end(), i + 1), reserve.end());
                lost.erase(remove(lost.begin(), lost.end(), i + 1), lost.end());
            }
        }
        
        else
            ++answer;
    }
    
    return answer;
}