#ifndef CRICKET_H
#define CRICKET_H

#include "tomatoPlant.h"
#include "maps.h"
#include "enemy.h"
#include "run.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "plant2.h"
#include "plant3.h"
#include "squirrel.h"

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
