#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> strNumbers;
    
    for (int num : numbers) 
        strNumbers.push_back(to_string(num));
    
    sort(strNumbers.begin(), strNumbers.end(), [](const string& a, const string& b) 
    {
        return a + b > b + a;
    });
    
    if (strNumbers[0] == "0")
        return "0";
    
    for (const string& str : strNumbers) 
        answer += str;
    
    return answer;
}