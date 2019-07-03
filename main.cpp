#include <iostream>
#include "helper.cpp"
using namespace std;

int main()
{
    char Arr[3][3] = {{'_', '_', '_'}, {'_', '_', '_'}, {' ', ' ', ' '}};
    bool gameStatus = true;
    while (gameStatus)
    {

        buildBoard(Arr);

        if (true)
        {
            gameStatus = false;
        }
    }

    return 0;
}