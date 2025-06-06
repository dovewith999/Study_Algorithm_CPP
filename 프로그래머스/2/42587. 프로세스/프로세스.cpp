#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    priority_queue<int> pq;
    queue<pair<int, int>> q;
    
    
    for(int i = 0; i < priorities.size(); ++i)
    {
        pq.push(priorities[i]);
        q.push({i, priorities[i]});
    }
    
    int count = 1;
    
    while(true)
    {
        pair<int, int> temp = q.front();
        q.pop();
        
        if(temp.second != pq.top())
            q.push(temp);
        
        else
        {
            if(temp.first == location)
            {
                answer = count;
                break;
            }
        
            else
            {
                ++count;
                pq.pop();
            }
        }
    }
    
    return answer;
}