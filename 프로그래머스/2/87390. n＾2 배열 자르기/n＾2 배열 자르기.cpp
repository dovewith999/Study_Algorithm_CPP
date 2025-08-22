#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    // left부터 right까지 각 인덱스에 대해 값을 계산
    for (long long i = left; i <= right; ++i) 
    {
        // 1차원 인덱스 i를 2차원 좌표로 변환
        long long row = i / n;  // 행
        long long col = i % n;  // 열
        
        // arr[row][col] = max(row, col) + 1
        int value = max(row, col) + 1;
        answer.push_back(value);
    }
    
    return answer;
}