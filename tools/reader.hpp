#include <stdio.h>
#include <string>
#include <vector>
#include <list>
#include <unordered_map>

class Reader {
    public:
        Reader();
        std::list<std::unordered_map<std::string, int, char>> shipReader(std::string filename);
};