//Author: Douglas Mullaly

#include "moveLogic.h"
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

bool moveLogic::whoWon(vector < vector < char > > board)
{

        if (board[0][0] == 'O' && board[0][0] == board[0][1] && board[0][0] == board[0][2]) return 1;
        else if (board[1][0] == 'O' && board[1][0] == board[1][1] && board[1][0] == board[1][2]) return 1;
        else if (board[2][0] == 'O' && board[2][0] == board[2][1] && board[2][0] == board[2][2]) return 1;
        else if (board[0][0] == 'O' && board[0][0] == board[1][0] && board[0][0] == board[2][0]) return 1;
        else if (board[0][1] == 'O' && board[0][1] == board[1][1] && board[0][1] == board[1][2]) return 1;
        else if (board[0][2] == 'O' && board[0][2] == board[1][2] && board[0][2] == board[2][2]) return 1;
        else if (board[0][0] == 'O' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) return 1;
        else if (board[2][0] == 'O' && board[2][0] == board[1][1] && board[2][0] == board[0][2]) return 1;
        else if (board[0][0] == 'X' && board[0][0] == board[0][1] && board[0][0] == board[0][2]) return 1;
        else if (board[1][0] == 'X' && board[1][0] == board[1][1] && board[1][0] == board[1][2]) return 1;
        else if (board[2][0] == 'X' && board[2][0] == board[2][1] && board[2][0] == board[2][2]) return 1;
        else if (board[0][0] == 'X' && board[0][0] == board[1][0] && board[0][0] == board[2][0]) return 1;
        else if (board[0][1] == 'X' && board[0][1] == board[1][1] && board[0][1] == board[1][2]) return 1;
        else if (board[0][2] == 'X' && board[0][2] == board[1][2] && board[0][2] == board[2][2]) return 1;
        else if (board[0][0] == 'X' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) return 1;
        else if (board[2][0] == 'X' && board[2][0] == board[1][1] && board[2][0] == board[0][2]) return 1;
        else return 0;

        return 0;

        // 0 means game is still going, 1 means player won, 2 means bot won, 3 means tie
}

bool moveLogic::validMove(int spot, vector < vector < char > > board)
{
        char spotValue;
        if (spot == 1) spotValue = board[0][0];
        else if (spot == 2) spotValue = board[1][0];
        else if (spot == 3) spotValue = board[2][0];
        else if (spot == 4) spotValue = board[0][1];
        else if (spot == 5) spotValue = board[1][1];
        else if (spot == 6) spotValue = board[2][1];
        else if (spot == 7) spotValue = board[0][2];
        else if (spot == 8) spotValue = board[1][2];
        else if (spot == 9) spotValue = board[2][2];

        if (spotValue != 'X' && spotValue != 'O') return 1;
        else return 0;

        /*
           if (firstRound == 0)
           {
           s1 = 0;
           s2 = 0;
           s3 = 0;
           s4 = 0;
           s5 = 0;
           s6 = 0;
           s7 = 0;
           s8 = 0;
           s9 = 0;
           firstRound++;
           }

           if (spotChoice == 1)
           {
           if (s1 == 1) return 0;
           else
           {
           s1 = 1;
           return 1;
           }
           }
           else if (spotChoice == 2)
           {
           if (s2 == 1) return 0;
           else
           {
           s2 = 1;
           return 1;
           }
           }
           else if (spotChoice == 3)
           {
           if (s3 == 1) return 0;
           else
           {
           s3 = 1;
           return 1;
           }
           }
           else if (spotChoice == 4)
           {
           if (s4 == 1) return 0;
           else
           {
           s4 = 1;
           return 1;
           }
           }

           else if (spotChoice == 5)
           {
           if (s5 == 1) return 0;
           else
           {
           s5 = 1;
           return 1;
           }
           }
           else if (spotChoice == 6)
           {
           if (s6 == 1) return 0;
           else
           {
           s6 = 1;
           return 1;
           }
           }
           else if (spotChoice == 7)
        {
                if (s7 == 1) return 0;
                else
                {
                        s7 = 1;
                        return 1;
                }
        }
           else if (spotChoice == 8)
           {
                   if (s8 == 1) return 0;
                   else
                   {
                           s8 = 1;
                           return 1;
                   }
           }
           else if (spotChoice == 9)
           {
                   if (s9 == 1) return 0;
                   else
                   {
                           s9 = 1;
                           return 1;
                   }
           }
           else return 0;
           */
}

int moveLogic::botMove()
{
        srand (time(NULL));
        return rand() % 9 + 1;

        /*
           cout<<turnNumber <<endl;
           if (turnNumber == 0)
           {
           turnNumber++;
           return 4;
           srand (time(NULL));
           return rand() % 9 + 1;
           }
           else if (turnNumber == 1)
           {
           turnNumber++;
           return 1;
           }
           else if (turnNumber == 2) return 7;
           else return 2;
         */
}
