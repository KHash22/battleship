#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include "grid.hpp"

Grid::Grid(int teamid): 
    grid(std::vector<std::vector<char>>(10, std::vector<char>(10, '.'))), team(teamid) {};

std::string Grid::drawBoard(bool filter) const{
    std::string boardView = "- - - - - - - - - - - -\n";
    for (int i = 0; i < 10; i++){
        boardView += "|";
        for (int j = 0; j < 10; j++){

            if (grid[i][j] != '.' && filter) {
                boardView += (" X");
            }
            else {
                boardView += ' ';
                boardView += grid[i][j];
            }
        }
        boardView += " |\n";
    }
    boardView += "- - - - - - - - - - - -\n";
    return boardView;
}