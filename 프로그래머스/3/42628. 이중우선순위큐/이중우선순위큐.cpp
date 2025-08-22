#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    vector<int> q;
    
    for(string& command : operations) {
        istringstream iss(command);
        string op;
        int value;
        iss >> op >> value;
        
        if(op == "I")
            q.emplace_back(value);
        
        else if(op == "D") 
        {
            sort(q.begin(), q.end());
            
            if(value == 1) 
            {
                if(!q.empty())
                    q.pop_back();
            }
    
            
            else if(value == -1) 
            {
                if(!q.empty())
                q.erase(q.begin()); 
            }
        }
    }

    if(q.empty()) 
    {
        answer.emplace_back(0);
        answer.emplace_back(0);
    }
    
    else
    {
        sort(q.begin(), q.end());
        
        answer.emplace_back(q.back());
        answer.emplace_back(q.front());
    }

    return answer;
}