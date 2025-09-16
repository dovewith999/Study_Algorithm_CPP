#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    
    answer = lcm(arr[0], arr[1]);
    
    for(int i = 2; i < arr.size(); ++i)
    {
        answer = lcm(answer, arr[i]);
    }
    
    return answer;
}