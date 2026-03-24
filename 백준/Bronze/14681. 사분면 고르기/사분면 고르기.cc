#include <iostream>

int main()
{
    int x = 0, y = 0;

    std::cin >> x;

    if (-1000 > x || 1000 < x || 0 == x)
    {
        return 0;
    }

    std::cin >> y;
    
    if (-1000 > y || 1000 < y || 0 == y)
    {
        return 0;
    }

    if (0 < x && 0 < y)
    {
        std::cout << 1 << std::endl;
    }
    
    else if (0 > x && 0 < y)
    {
        std::cout << 2 << std::endl;
    }

    else if (0 > x && 0 > y)
    {
        std::cout << 3 << std::endl;
    }

    else
    {
        std::cout << 4 << std::endl;
    }

    return 0;
}