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
                int turnNumber, firstRound;
                bool s1,s2,s3,s4,s5,s6,s7,s8,s9;
        public:
                bool whoWon( vector < vector < char> >);
                bool validMove(int, vector <vector <char > >); 
                int botMove();
};

#endif
