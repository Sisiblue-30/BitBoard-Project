//This is coming from the board.h header file
#include "board.h"

//This is initiated so that it can work in my main function
int CountBits(unsigned int x);
void PrintHex(unsigned int value);

//Starts the process of running the game
int main(void) {
        SimpleGame game;
        Start_Game(&game);
        Print_Board(&game);
}