#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1; // 예시의 15=15처럼 자기 자신은 무조건 성립하기 때문
    
    for(int i = 1; i < n; ++i)
    {
        int sum = i;
        for(int j = i + 1; j < n; ++j)
        {
            sum += j;
            
            if(sum == n)
                ++answer;
            else if (sum > n)
                break;
        }
    }
    return answer;
}