#ifndef FROG_H
#define FROG_H

#include "tomatoPlant.h"
#include "maps.h"
#include "enemy.h"
#include "cricket.h"
#include "run.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "plant2.h"
#include "plant3.h"
#include "squirrel.h"

class Frog {
    public:
        // Constructor
        Frog();

        // Interaction function with Plants
        void interact(Plant& plant);

    // private:
    //     // Cricket properties
    //     int damage;
    //     // ... add additional properties as needed
};

#endif 