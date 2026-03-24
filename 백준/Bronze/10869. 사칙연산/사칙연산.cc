#include <iostream>

using namespace std;

int main()
{
    int a, b;
    
    cin >> a >> b;
    
    if(1 > a || 10000 < b)
    {
        return 0;
    }
    
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a/b << endl;
    cout << a%b << endl;
    
    return 0;
}