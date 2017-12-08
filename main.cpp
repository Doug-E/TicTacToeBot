//Author: Douglas Mullaly

#include <iostream>
#include <string>
#include <vector>
#include "fstream"

using namespace std;

//vvvvvvvvvvvvv FOR TESTING. DELETE BEFORE FINAL DRAFT! vvvvvvvvvvvv

void printMatrix();






//^^^^^^^^^^^^^^ FOR TESTING. DELETE BEFORE FINAL DRAFT! ^^^^^^^^^^^^^

//Proto
void vectorInitilizer();
void playingBoard();

//global
vector <vector <string> > board;
int boardSize = 3; //logic may break if not equal to 3!

int main()
{
        vectorInitilizer();    
        string playerSpot, botSpot;
        cout<< "Bot plays first" <<endl;
        printMatrix();


}

vectorInitilizer()
{
        board.resize(boardSize);
        for (int x = 0; x < boardSize; x++)
        {   
                board[x].resize(boardSize);
                for (int y = 0; y < boardSize; y++)
                {
                        board[x][y] = 0;
                }
        }



}



//TEST CODE
void printMatrix(vector <vector <char> > matrix)
{
        for (int r = 0; r < board.size(); r++)
        {
                for (int c = 0; c < board[r].size(); c++)
                {
                        cout<< board[r][c] << " ";
                }
                cout<< endl;
        }
}
//TEST CODE




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


