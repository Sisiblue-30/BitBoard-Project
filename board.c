#include <stdio.h>
//This is coming from the board.h header file
#include "board.h"

void Start_Game(SimpleGame* game) {
    game->Red_Pieces = 0;
    game->Black_Pieces = 0;
    //This is for the rows that are going to be the red checker player
    for (int i = 0; i <= 2; i++) {
        for (int j = 1; j < 8; ++j ) {
            if (((i+j) % 2) == 1) {
                int x = (i*8)+j;
                game->Red_Pieces |= (1ULL<<x);
            };
        }
    }

    //This is for the rows that are going to be the black checker player
    for (int i = 5; i <= 8; i++) {
        for (int j = 0; j < 8; ++j) {
            if (((i+j) % 2) == 1) {
                int x = (i*8)+j;
                game->Black_Pieces |= (1ULL<<x);
            };
        }
    }
}

//This was meant to be used to see if a certain square on the board was empty
unsigned long long Empty_Square(SimpleGame* game) {
    return ~(game->Red_Pieces | game->Black_Pieces);
}

//This function prints out the board for the game
void Print_Board(SimpleGame* game){
    //This loop is to print out were the red pieces, black piece and empty spots for the board, this is its starting position.
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; ++j) {
            int x = (i*8)+j;
            if (game->Red_Pieces & (1ULL << x)) {
                printf("red  ");
            }
            else if (game->Black_Pieces & (1ULL << x)) {
                printf("bla  ");
            }
            else {
                printf("...  ");
            }
        }
        printf("\n");
    }
}


