#include <iostream>

int main()
{

    int iHour, iMinite;

    std::cin >> iHour >> iMinite;

    if (0 > iHour || 23 < iHour || 0 > iMinite || 59 < iMinite)
    {
        return 0;
    }

    int iCount = 0;

    while (true)
    {
        if (45 > iCount)
        {
            ++iCount;
            --iMinite;

            if (-1 == iMinite)
            {
                --iHour;

                if (-1 == iHour)
                {
                    iHour = 23;
                }

                iMinite = 59;
            }
        }

        else
        {
            break;
        }
    }

    std::cout << iHour << " " << iMinite << std::endl;
    

    return 0;
}