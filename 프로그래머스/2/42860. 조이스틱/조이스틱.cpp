#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    int len = name.length();
    int move = len - 1;  // 기본: 오른쪽으로만 쭉 가는 경우
    
    // 1. 상하 조작 (알파벳 변경) 횟수 계산
    for(int i = 0; i < len; ++i) 
    {
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
    }
    
    // 2. 좌우 이동 최솟값 계산
    for(int i = 0; i < len; ++i) 
    {
        int next = i + 1;
        
        // 연속된 A 구간 찾기
        while(next < len && name[next] == 'A') 
        {
            next++;
        }
        
        // 3가지 경로 비교
        // - 오른쪽으로만: i
        // - 왼쪽으로만: (len - next)
        // - 오른쪽 갔다가 왼쪽: i * 2 + (len - next)
        // - 왼쪽 갔다가 오른쪽: i + (len - next) * 2
        move = min(move, i * 2 + len - next);  // 오른쪽 갔다 왼쪽
        move = min(move, i + (len - next) * 2);  // 왼쪽 갔다 오른쪽
    }
    
    answer += move;
    
    return answer;
}