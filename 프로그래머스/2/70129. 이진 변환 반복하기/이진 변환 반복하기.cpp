#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    
    int cntChanged = 0; // 이진 변환의 횟수를 세기 위한 변수
    int cntZero = 0; //0의 개수를 세기 위한 변수
    
    while(s != "1")
    {
        string tempStr1 = ""; // 0을 없앤 문자열을 저장할 변수
        
        // 0을 1차 걸러내기
        for(int i = 0; i < s.length(); ++i) 
        {
            if(s[i] - '0' == 0)
            {
                ++cntZero;
                continue;
            }
            
            tempStr1 += s[i];
        }
        
        string tempStr2 = ""; // tempStr1의 길이를 2진법으로 표현한 문자열
        int length = tempStr1.length();
        
        
        while(length != 0)
        {
            tempStr2 += to_string(length % 2);
            length /= 2;
        }
        
        s = tempStr2;
        reverse(s.begin(), s.end());
        
        ++cntChanged;
    }
    
    answer.emplace_back(cntChanged); // 이진 변환 횟수 넣기
    answer.emplace_back(cntZero); // 0의 개수 넣기
    
    return answer;
}