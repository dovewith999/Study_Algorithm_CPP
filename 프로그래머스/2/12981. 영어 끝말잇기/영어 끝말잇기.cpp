#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    // 초기값 세팅
    answer.emplace_back(0);
    answer.emplace_back(0);
    
    for(int i = 0; i < words.size() - 1; ++i)
    {
        string firstWord = words[i];
        string secondWord = words[i + 1];
        
        if(firstWord[firstWord.length() - 1] == secondWord[0])
        {
            if(find(words.begin(), words.begin() + i, secondWord) != words.begin() + i)
            {
                answer[0] = ((i + 1) % n) + 1;
                answer[1] = ((i + 1) / n) + 1;
                break;
            }
            else
            {
                continue;
            }
        }
    
        else
        {
            answer[0] = ((i + 1) % n) + 1;
            answer[1] = ((i + 1) / n) + 1;
            break;
        }
    }
    

    return answer;
}