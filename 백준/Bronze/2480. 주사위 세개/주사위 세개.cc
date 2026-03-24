#include <iostream>

int main()
{

    int a, b, c;

    std::cin >> a >> b >> c;

    int numOfsame = 1;
    
    for (int i = 0; i < 3; ++i)
    {
        if (0 == i)
        {
            if (a == b)
            {
                ++numOfsame;
            }
        }

        else if (1 == i)
        {
            if (a == c)
            {
                ++numOfsame;
            }
        }

        else if (2 == i)
        {
            if (b == c)
            {
                if (3 > numOfsame)
                {
                    ++numOfsame;
                }
            }
        }

    }


    if (1 == numOfsame)
    {
        if (a > b)
        {
            if (a > c)
            {
                std::cout << a * 100 << std::endl;
            }
            else if (a < c)
            {
                std::cout << c * 100 << std::endl;
            }
        }

        else if (a < b)
        {
            if (b > c)
            {
                std::cout << b * 100 << std::endl;
            }

            else if (b < c)
            {
                std::cout << c * 100 << std::endl;
            }
        }
    }

    else if (2 == numOfsame)
    {
        if (a == b)
        {
            std::cout << 1000 + a * 100 << std::endl;
        }
        else if (a == c)
        {
            std::cout << 1000 + a * 100 << std::endl;
        }
        else if (b == c)
        {
            std::cout << 1000 + b * 100 << std::endl;
        }
    }

    else if (3 == numOfsame)
    {
        std::cout << 10000 + a * 1000 << std::endl;
    }



    return 0;
}