#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) 
{
    string answer = "";
    
    vector<int> numbers;
    
    stringstream ss(s);
    string token;
    
    while(ss >> token)
    {
        try
        {
            int num = stoi(token);
            numbers.push_back(num);
        }
        
        catch(const invalid_argument& e) 
        {
            continue;
        }
        
        catch(const out_of_range& e) 
        {
            continue;
        }

    }
    
    sort(numbers.begin(), numbers.end());
                          
    answer = to_string(numbers[0]) + " " + to_string(numbers[numbers.size() - 1]);
    
    return answer;
}