#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    unordered_map<string, vector<string>> map;
    
    for(int i = 0; i < clothes.size(); ++i)
    {
        map[clothes[i][1]].push_back(clothes[i][0]); 
    }
    
    for(pair<string, vector<string>> v: map)
    {
        answer *= v.second.size() + 1;
    }
    
    return answer - 1;
}