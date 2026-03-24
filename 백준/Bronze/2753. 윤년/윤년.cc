#include <iostream>

int main()
{
    int iYear = 0;
    
    std::cin >> iYear;
    
    if(1 > iYear || 4000 < iYear)
    {
        return 0;
    }
    
    else
    {
        if((0 == iYear % 4))
        {
            if(0 != iYear % 100)
            {
                std::cout << 1 << std::endl; 
            }
            
            else if (0 == iYear % 400)
            {
                std::cout << 1 << std::endl; 
            }
            
            else 
            {
                std::cout << 0 << std::endl;
            }
        }

        else
        {   
            std::cout << 0 << std::endl;
        }
    }
     

    
    return 0;
}