#include <iostream>

using namespace std;

bool Check(int first, int second)
{
    if(first < second)
    {
        if(first % 2 == 1 && first + 1 == second)
        {
            return true;
        }
    }
    
    else if(first > second)
    {
        if(second % 2 == 1 && second + 1 == first)
        {
            return true;
        }
    }
        
    return false;
}

int solution(int n, int a, int b)
{
    int answer = 1;

    int first = a;
    int second = b;

    for (int i = 0; i < n / 2; ++i)
    {
        if (Check(first, second))
        {
            return answer;
        }

        first = first % 2 == 0 ? first >> 1 : (first >> 1) + 1;
        second = second % 2 == 0 ? second >> 1 : (second >> 1) + 1;
        ++answer;
    }

    return answer;
}