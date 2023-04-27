#ifndef CRICKET_H
#define CRICKET_H

#include "enemy.h"
#include "hero.h"



class Cricket {
    public:
        // Constructor
        Cricket();

        // Interaction function with Plants
        void interact(Plant& plant);

    // private:
    //     // Cricket properties
    //     int damage;
    //     // ... add additional properties as needed
};

#endif // CRICKET_H
