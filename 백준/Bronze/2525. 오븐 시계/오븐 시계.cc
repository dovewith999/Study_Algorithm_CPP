#include <iostream>

int main()
{

    int iHour = 0, iMinite = 0;

    std::cin >> iHour >> iMinite;

    if (0 > iHour || 23 < iHour || 0 > iMinite || 59 < iMinite)
    {
        return 0;
    }

    int iTimer = 0;

    std::cin >> iTimer;

    if (0 > iTimer || 1000 < iTimer)
    {
        return 0;
    }

    int iSum = iTimer + iMinite;

    iHour = iHour + (iSum / 60);

    if (24 <= iHour)
    {
        iHour = iHour - 24;
    }

    iMinite = iSum % 60;

    std::cout << iHour << " " << iMinite << std::endl;
    

    return 0;
}