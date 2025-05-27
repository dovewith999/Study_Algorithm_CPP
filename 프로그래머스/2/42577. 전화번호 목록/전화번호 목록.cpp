#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    unordered_map<string, int>map;
    
    for(int i = 0; i < phone_book.size(); ++i)
        map[phone_book[i]] = 1;
    
    for(int i = 0; i < phone_book.size(); ++i)
    {
        for(int j = 0; j < phone_book[i].length() - 1; ++j)
        {
            string phoneNum = phone_book[i].substr(0, j + 1);
            
            if(map[phoneNum])
                return false;
        }
    }
    
    return answer;
}