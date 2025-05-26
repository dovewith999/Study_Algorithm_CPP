#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

    while(pq.size() >= 2 && pq.top() < K)
    {
        int minNum1 = pq.top(); 
        pq.pop();
        int minNum2 = pq.top();
        pq.pop();
        
        int newScoville = minNum1 + (minNum2 * 2);
        pq.push(newScoville);
        ++answer;
    }
    
    if(pq.top() < K)
        answer = -1;
    
    return answer;
}