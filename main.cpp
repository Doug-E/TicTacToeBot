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
void addMove(int, int);
void printGame();
void getPlayerMove();
int inputToSpot(string);
bool didWin(int);

//global
vector <vector <char> > board;
int boardSize = 3;//logic may break if not equal to 3!
int turn = 0;
int maxTurn = ((((boardSize * boardSize))-1)/2);

moveLogic mL;

int main()
{
        string playAgain;
        do
        {
                vectInit();
                cout<< "Bot plays first" <<endl; 
                inGame();
                cout<< "Play again? (y/n)" <<endl;
                cin >> playAgain;
        }
        while (playAgain == "y" || playAgain == "Y" || playAgain == "yes" || playAgain == "Yes" || playAgain == "YES");
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

void inGame()
{
        int player, spot;
        bool isHumanTurn = true;
        string rawInput;
        player = 0; //player 0 is the bot
        spot = mL.botMove();
        addMove(player, spot);
        printGame();
        for (int round = 0; round < maxTurn; round++)
        {
                bool validSpot;
                do
                {   
                        player = 1; //player 1 is the human
                        cout << "Your move";
                        cin >> rawInput;
                        spot = inputToSpot(rawInput);
                        validSpot = mL.validMove(spot);
                        if (validSpot == true) addMove (player, spot);
                        else 
                        {
                                cout<< "Invalid move. Is that spot taken? Format moves letter before number. Eg: 'a2' or 'c1'" <<endl;
                        }

                }
                while (validSpot == 0);
                if (didWin(player) == 1) break;
                do
                {
                        player = 0;
                        spot = mL.botMove();
                        validSpot = mL.validMove(spot);

                        if (validSpot == true) addMove(player, spot);
                }
                while (validSpot == 0);
                printGame();
                turn++;
                if (didWin(player) == 1)
                {
                        printGame();
                        break;
                }

        }
}

void addMove(int player, int spot)
{
        char symbol;
        if (player == 1) symbol = 'O';
        else if (player == 0) symbol = 'X';
        else symbol = 'E';
        if (spot == 1) board[0][0] = symbol;
        else if (spot == 2) board[1][0] = symbol;
        else if (spot == 3) board[2][0] = symbol;
        else if (spot == 4) board[0][1] = symbol;
        else if (spot == 5) board[1][1] = symbol;
        else if (spot == 6) board[2][1] = symbol;
        else if (spot == 7) board[0][2] = symbol;
        else if (spot == 8) board[1][2] = symbol;
        else if (spot == 9) board[2][2] = symbol;
        else cout << "Error adding play... You shouldn't see this error message :(" <<endl; //sh** hit the fan

}

bool didWin(int player) 
{
        bool winner = mL.whoWon(board);
        if (winner == 0) return 0;
        if (winner == 1 && player == 1)
        { 
                cout << "Good Job! You won!!!" <<endl;
                return 1;
        }
        else if (winner == 1 && player == 0)
        {
                cout << "You lost to the bot. Better luck next time!" <<endl;
                return 1;
        }
        else if (turn = maxTurn)
        {
                cout << "Cats game! Better luck next time!" <<endl;
                return 1;
        }
        else return 0;
}

int inputToSpot(string playerInput)
{
        if (playerInput == "A1" || playerInput == "a1") return 1;
        if (playerInput == "A2" || playerInput == "a2") return 2;
        if (playerInput == "A3" || playerInput == "a3") return 3;
        if (playerInput == "B1" || playerInput == "b1") return 4;
        if (playerInput == "B2" || playerInput == "b2") return 5;
        if (playerInput == "B3" || playerInput == "b3") return 6;
        if (playerInput == "C1" || playerInput == "c1") return 7;
        if (playerInput == "C2" || playerInput == "c2") return 8;
        if (playerInput == "C3" || playerInput == "c3") return 9;
        else return 0;
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


