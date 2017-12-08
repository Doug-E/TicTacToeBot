//Author: Douglas Mullaly

#include <iostream>
#include <string>
#include <vector>
#include "fstream"

using namespace std;

//Proto
void vectInit();
void playingBoard();
void printGame();

//global
vector <vector <char> > board;
int boardSize = 3; //logic may break if not equal to 3!

int main()
{
        vectInit();    
        string playerSpot, botSpot;
        cout<< "Bot plays first" <<endl;
        printGame();
        

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


