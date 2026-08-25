#include <stdio.h>
#include <string>

class Ship {
    private:
        std::string name;
        char ticker;
        const int team;
        int size;
        bool alive;
    public:
        Ship(std::string n, char t, int tm, int sz) : name(n), ticker(t), size(sz), team(tm), alive(true) {
        }

        bool shipHit() {
            if ((size-1) == 0) {
                size--;
                alive = false;
                return alive;
            }
            else {
                size--;
                return alive;
            }
        }

        bool getHealth() const {
            return alive;
        }
        
        char getTicker() const {
        return ticker;
    }
};