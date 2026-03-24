#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cin >> a;
    
    if(0 >= a)
    {
        return 0;
    }
    
    cin >> b;
    
    if(10 <= b)
    {
       return 0;
    }
    
    cout << a - b << endl;
    
    return 0;
}