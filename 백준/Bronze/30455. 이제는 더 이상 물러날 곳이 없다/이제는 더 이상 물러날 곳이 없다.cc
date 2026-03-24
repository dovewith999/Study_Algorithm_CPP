#include <iostream>

int main()
{
    int iNum = 0;

    std::cin >> iNum;

    if (iNum % 2 == 1)
    {
        std::cout << "Goose" << std::endl;
    }

    else
    {
        std::cout << "Duck" << std::endl;
    }
    
    return 0;
}