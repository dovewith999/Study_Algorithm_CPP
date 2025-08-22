#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    
    map<int, int> count;
    
    // 빈도수 계산
    for (int t : tangerine) 
    {
        count[t]++;
    }
    
    // 빈도수만 추출하여 정렬
    vector<int> freq;
    for (auto& p : count) 
    {
        freq.push_back(p.second);
    }
    sort(freq.rbegin(), freq.rend());  // 내림차순

    for (int f : freq) 
    {
        k -= f;
        answer++;
        if (k <= 0) break;
    }
    
    return answer;
}