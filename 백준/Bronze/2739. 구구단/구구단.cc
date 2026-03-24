#include <iostream>

int main()
{
    int iNum = 0;

    std::cin >> iNum;

    if (0 > iNum || 9 < iNum)
    {
        return 0;
    }

    for (int i = 1; i < 10; ++i)
    {
        std::cout << iNum << " * " << i << " = " << iNum * i << std::endl;
    }

    return 0;
}