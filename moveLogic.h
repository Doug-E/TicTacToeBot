//Author: Douglas Mullaly

#ifndef _MOVELOGIC_H_
#define _MOVELOGIC_H_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class moveLogic
{

    private:
        int turn;

    public:
        string whoWon(vector < vector < char > > );
        bool validMove(vector < vector < char > > ); 
        string botMove(vector < vector < char > > );
};

#endif
