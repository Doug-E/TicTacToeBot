# TicTacToeBot
A bot that will play against you in tic tac toe.

# Input/Output
A good example of input and output is [line 66-67](/main.cpp#L66). This is a basic command and this section is a good example of it used proper;y.

There is also examples of output through out the entire program. Such as the [printGame function](/main.cpp#L174).

# Control Flow 
The control flow in [whoWon lines 13-29](/moveLogic.cpp#L13) offers an example of if, else if, and an else statement. They are used accurately without causing undo calculations. However I want to note that I could have left the "else if" statements as just "if" statements because if one is evaluated to be true it would return something, causing the function to stop.

# Iteration 
To initialize the vector in the [vectInit function](/main.cpp#40) I used a "for loop" to initially enter a space into each char so that the printGame fucntion would look correct.

There are a few do-while's in the program, including [recieving the players input](/main.cpp#L62). This one is used to verify the input spot is valid before moving on. This is necessary so that the program wont continue without an input. 

# Data Structure
The main board is stored in a [simple 3 x 3 matrix](/main.cpp#L37) so that the the translation to a tic tac toe board was simple. This is a good way to store this because its layout is easy to remember and offers a funtional way of [visualization](/main.cpp#L174). 

# Function
[printGame]((/main.cpp#L174) is a void funtion with nothing passed into it. This fuction uses the global vector of vectors to print out the game.

Function [inputToSpot](/main.cpp#L160) recieves the users move input and interprets it to a simple number, that is later used to refer to a specific spot on the board. Note: This function also has a line of "if" statements rather than "else if" because each if returns a number and I figured it wouldn't make a difference in effeciency because the program will stop at its required spot anyway.

The [toWinnerFile](/main.cpp#L146) function uses a pass by refrence. While not completely necessary, it does prevent having to use up a tiny bit of memory in redefining an int. I don't thnk this program had any portions that would signifcantly benifit from a pass by refrence. 

# File IO
The [toWinnerFile](/main.cpp#L146) function saves the previous winner to a score file. It uses a few flags to erase the previous version of the file (if any) and writes the new winner to it. 

# Class
The [moveLogic](/moveLogic.cpp) class was used anytime a move was made. It checks if [a move is valid](/moveLogic.cpp#L36), decides if someone [has won the game](/moveLogic.cpp#L10), and dictate [how the bot moves](/moveLogic.cpp#L55). This also allowes for change3s to the rules without having to completely change the main.cpp.

