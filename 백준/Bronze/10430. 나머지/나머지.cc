#include <iostream>

int main()
{
    int a, b, c;
    
    std::cin >> a;
    
    if(2 > a)
    {
        return 0;
    }
    
    std::cin >> b;
    
    if(2 > b)
    {
        return 0;
    }
    
    std::cin >> c;
    
    if(10000 < c)
    {
        return 0;
    }
    
    std::cout << (a+b)%c << std::endl;
    std::cout << ((a%c) + (b%c))%c << std::endl;
    std::cout << (a*b)%c << std::endl;
    std::cout << ((a%c) * (b%c))%c << std::endl;
    
    return 0;
}