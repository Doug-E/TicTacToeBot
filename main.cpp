//Author: Douglas Mullaly

#include <iostream>
#include <string>
#include <vector>
#include "fstream"
#include "moveLogic.h"

using namespace std;

//Proto
void vectInit();
void inGame();
void printGame();
void getPlayerMove();

//global
vector <vector <char> > board;
int boardSize = 3; //logic may break if not equal to 3!

int main()
{
    string playAgain = 'y';
    do
    {
        vectInit();
        cout<< "Bot plays first" <<endl; 
        inGame();
        cout<< "Play again? (y/n)" <<endl;
        cin >> playAgain;
    }
    while (playAgain == 'y' || playAgain == 'Y' || playAgain == 'yes' || playAgain == 'Yes || playAgain == 'YES');
}

void vectInit()
{
        board.resize(boardSize);
        for (int x = 0; x < boardSize; x++)
        {   
                board[x].resize(boardSize);
                for (int y = 0; y < boardSize; y++)
                {
                        board[x][y] = ' ';
                }
        }
}

void printGame()
{
        cout << " A    B    C" <<endl;
        for (int x = 0; x < board.size(); x++)
        {
                for (int y = 0; y < board[x].size(); y++)
                {
                        cout<< " " << board[x][y];
                        if (y < (board.size()-1)) cout << " ||";
                        else cout<< "  " << x+1;
                }
                cout << endl;
                if (x < (board.size() -1)) cout << "=============" <<endl;
        }
}




/*  Prototype board
    A      B      C
    ||=====||=====||=====||
    ||     ||     ||     ||
    ||     ||     ||     ||1
    ||     ||     ||     ||
    ||=====||=====||=====||
    ||  -  || \ / ||     ||
    || | | ||  X  ||     ||2
    ||  -  || / \ ||     ||
    ||=====||=====||=====||
    ||     ||     ||     ||
    ||     ||     ||     ||3
    ||     ||     ||     ||
    ||=====||=====||=====||
 */


