#include <string>
#include <vector>
#include <stack>

using namespace std;

void SpinString(string &s)
{
    char first = s[0];
    
    for(int i = 0; i < s.length() - 1; ++i)
    {
        s[i] = s[i + 1];
    }
    
    s[s.length() - 1] = first;
}

int solution(string s) 
{
    int answer = 0;
    
    string str = s;
    
    for(int i = 0; i < str.length(); ++i)
    {
        if(str[0] == '}' || str[0] == ')' || str[0] == ']')
        {
            SpinString(str);
            continue; 
        }
        
        stack<char> ward;
        bool valid = true;
        
        for(int j = 0; j < str.length(); ++j)
        {
            if(str[j] == '{' || str[j] == '(' || str[j] == '[')
                ward.push(str[j]);
        
            else 
            {
                if(ward.empty())
                {
                    valid = false;
                    break;
                }
                
                char top = ward.top();
                if((str[j] == '}' && top != '{') ||
                   (str[j] == ')' && top != '(') ||
                   (str[j] == ']' && top != '['))
                {
                    valid = false;
                    break;
                }
                
                ward.pop();
            }
                
        }
    
        if(valid && ward.empty())
            ++answer; 
        
        SpinString(str);
    }

    return answer;
}