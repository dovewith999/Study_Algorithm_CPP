#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cin >> a >> b;
    
    if(-10000 > a || 10000 < a || -10000 > b || 10000 < b)
    {
        return 0;
    }
    
    if(a > b)
    {
        cout << ">" << endl;
    }
    
    else if(a < b)
    {
        cout << "<" << endl;
    }
    
    else 
    {
        cout << "==" << endl;
    }
    
    return 0;
}