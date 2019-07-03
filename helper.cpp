#include <iostream>
using namespace std;

void buildBoard(char board[3][3]);

void buildBoard(char board[3][3])
{

    cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << "\n";

    cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << "\n";

    cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << "\n";
    return;
}
