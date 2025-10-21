//
// Created by sdrei on 10/20/2025.
//

#ifndef BITBOARD_PROJECT_BOARD_H
#define BITBOARD_PROJECT_BOARD_H

#endif //BITBOARD_PROJECT_BOARD_H

//Im going the simple route
typedef struct {
    unsigned long long Red_Pieces;
    unsigned long long Black_Pieces;
} SimpleGame;

void Start_Game(SimpleGame *game);
void Print_Board(SimpleGame* game);
unsigned long long Empty_Square(SimpleGame* game);
;