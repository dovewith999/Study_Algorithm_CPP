#include <iostream>

using namespace std;

enum EPiece { PIECE_KING, PIECE_QUEEN, PIECE_LOOK, PIECE_BISHOP, PIECE_KNIGHT, PIECE_PAWN, PIECE_END };
    
int main()
{
    int piece[PIECE_END];
    int numOfpiece[6] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < PIECE_END; ++i)
    {
        cin >> piece[i];

        if ((0 <= piece[i]) && (10 >= piece[i]))
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    
    for(int i = 0; i < 6; ++i)
    {
        cout << numOfpiece[i] - piece[i] << endl;
    }
    
    return 0;
}