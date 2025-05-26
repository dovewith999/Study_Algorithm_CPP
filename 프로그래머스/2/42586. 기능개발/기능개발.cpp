#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    while(!progresses.empty())
    {
        for (int i = 0; i < progresses.size(); ++i) 
        {
            progresses[i] += speeds[i];
        }
        
        if (progresses[0] >= 100)
        {
            int completeCount = 0;
            
            while (!progresses.empty() && progresses[0] >= 100) 
            {
                progresses.erase(progresses.begin());
                speeds.erase(speeds.begin()); 
                completeCount++;
            }
            
            answer.push_back(completeCount);
        }
    }
    
    return answer;
}