#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cin >> a;
    
    if(100 > a || 999 < a)
    {
        return 0;
    }
    
    cin >> b;
    
    if(100 > b || 999 < b)
    {
        return 0;
    }
    
    int c, d, e;
    
    c = b / 100;
    
    d = (b - (c * 100)) / 10;
    
    e = ((b - (c * 100)) - (d * 10));
    
    cout << a * e << endl;
    cout << a * d << endl;
    cout << a * c << endl;
    cout << a * b << endl;
    
    return 0;
}