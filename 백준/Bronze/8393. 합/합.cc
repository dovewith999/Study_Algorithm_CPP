#include <iostream>

using namespace std;

int main()
{
    int iSum = 0;
    
    int num = 0;
    
    cin >> num;
    
    if(1 > num || 10000 < num)
    {
        return 0;
    }
    
    for(int i = 1; i <= num; ++i)
    {
        iSum = iSum + i;
    }
    
    cout << iSum << endl;
    
    return 0;
}