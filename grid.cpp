#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Grid {
    private:
        vector<vector<char>> grid;
        const int team; //

    public:
        Grid(int teamid): grid(vector<vector<char>>(10, vector<char>(10, '.'))), team(teamid) {
        };

        string drawBoard(bool filter = false) const{
            string boardView = "- - - - - - - - - - - -\n";
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

        
};