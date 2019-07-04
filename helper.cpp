#include <iostream>
using namespace std;
#include <map>
#include <iterator>
#include <vector>
#include <string>

void buildBoard(char board[3][3]);
void playGame(char board[3][3], char Player);
bool isWinningState(char board[3][3]);

map<int, vector<int>> playerChoiceMap;

void buildBoard(char board[3][3])
{

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if ((x == 0 || x == 1) && (board[x][y] == ' ') && y == 2)
                cout << "_";
            else if ((x == 0 || x == 1) && (board[x][y] == ' ') && y != 2)
                cout << "_|";
            else
            {
                if (y != 2)
                    cout << board[x][y] << "|";
                else
                    cout << board[x][y];
            }
        }
        cout << endl;
    }

    return;
}

void playGame(char board[3][3], char Player)
{

    cout << "\n\nCurrent Turn: " << Player << endl
         << endl;
    int playerChoice = 0;

    buildBoard(board);
    
    playerChoiceMap[1] = {2, 0};
    playerChoiceMap[2] = {2, 1};
    playerChoiceMap[3] = {2, 2};
    playerChoiceMap[4] = {1, 0};
    playerChoiceMap[5] = {1, 1};
    playerChoiceMap[6] = {1, 2};
    playerChoiceMap[7] = {0, 0};
    playerChoiceMap[8] = {0, 1};
    playerChoiceMap[9] = {0, 2};

    cout << "\nEnter the number that corresponds to where you wish to play: ";
    cin >> playerChoice;
    int x = 1;
    for (int x = 1; x < 10; x++)
    {
        if (playerChoice == x)
        {
            board[playerChoiceMap[x][0]][playerChoiceMap[x][1]] = Player;
            return;
        }
    }
}

bool isWinningState(char board[3][3])
{
    if (((board[0][0] == 'X') || (board[0][0] == 'O')) && (board[0][0] == board[1][0]) && (board[1][0] == board[2][0]))
    {
        return true;
    }

    return false;
}