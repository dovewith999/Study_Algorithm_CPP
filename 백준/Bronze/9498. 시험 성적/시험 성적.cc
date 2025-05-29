#include <iostream>

int main()
{
    int iScore = 0;
    
    std::cin >> iScore;
    
    if(0 > iScore || 100 < iScore)
    {
        return 0;
    }
    
    else if(90 <= iScore && 100 >= iScore)
    {
        std::cout << "A" << std::endl;
    }
    
    else if(80 <= iScore && 90 > iScore)
    {
        std::cout << "B" << std::endl;
    }
    
    else if(70 <= iScore && 80 > iScore)
    {
        std::cout << "C" << std::endl;
    }
    
    else if(60 <= iScore && 70 > iScore)
    {
        std::cout << "D" << std::endl;
    }
    
    else
    {
        std::cout << "F" << std::endl;
    }
    
    return 0;
}