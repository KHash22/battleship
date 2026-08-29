#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>

class Grid {
    private:
        std::vector<std::vector<char>> grid;
        const int team; //

    public:
        Grid(int teamid);
        std::string drawBoard(bool filter = false) const;
        void populate(char key, int x, int y);
};