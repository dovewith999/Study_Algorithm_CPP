#include <iostream>
#include <vector>

std::vector<int> inputNums;

int main()
{
    int numOfCard = 0;
    int numOfBlackJack = 0;

    std::cin >> numOfCard >> numOfBlackJack;

    for (int i = 0; i < numOfCard; ++i)
    {
        int num = 0;
        std::cin >> num;
        inputNums.emplace_back(num);
    }

    int sum = 0;
    int bestNum = 0;
    int bestDistance = numOfBlackJack;

    for (int k = 0, i = 1, j = 2; i < numOfCard - 1; )
    {
        sum = inputNums[k] + inputNums[i] + inputNums[j];

        if(sum <= numOfBlackJack && abs(numOfBlackJack - sum) < bestDistance)
        {
            bestNum = sum;
            bestDistance = numOfBlackJack - sum;

            if (bestNum == numOfBlackJack)
                break;
        }

        if (j == numOfCard - 1)
        {
            if (i == numOfCard - 2)
            {
                ++k;
                i = k;
            }
            ++i;
            j = i + 1;
        }

        else
        {
            ++j;
        }
    }

    std::cout << bestNum << std::endl;
    
    return 0;
}