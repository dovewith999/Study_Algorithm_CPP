#include <iostream>

using namespace std;

int main()
{
    double a, b;
    
    cin >> a;
    
    if(0.0 >= a)
    {
        return 0;
    }
    
    cin >> b;
    
    if(10.0 <= b)
    {
        return 0;
    }
    
    cout.precision(10);
   
    cout << a/b << endl;
    
    return 0;
}