#include <iostream>
#include "helper.cpp"

using namespace std;

int main()
{
    char Player = ' ';
    int roundCounter = 1;
    char Arr[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    bool gameStatus = true;
    do
    {
        if (Player == 'X')
        {
            Player = 'O';
        }
        else if (Player == 'O' or Player == ' ')
        {
            Player = 'X';
        }

        cout << "The number correspond to the position";
        cout << endl;
        cout << 7 << "|" << 8 << "|" << 9 << "\n";

        cout << 4 << "|" << 5 << "|" << 6 << "\n";

        cout << 1 << "|" << 2 << "|" << 3 << "\n";

        playGame(Arr, Player);

        roundCounter++;
    } while (!isWinningState(Arr));

    buildBoard(Arr);
    cout << "\nPlayer " << Player << " Wins!";
    return 0;
}