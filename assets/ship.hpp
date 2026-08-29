#include <stdio.h>
#include <string>

//Class Header
class Ship {
    private:
        std::string name;
        char ticker;
        const int team;
        int size;
        bool alive;
    public:
        Ship(std::string n, char t, int tm, int sz);
        bool shipHit();
        bool getHealth() const;
        char getTicker() const;
};