#ifndef SQUIRREL_H
#define SQUIRREL_H

#include "tomatoPlant.h"
#include "maps.h"
#include "enemy.h"
#include "cricket.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "plant2.h"
#include "plant3.h"
#include "run.h"

#include "Plant.h" // Include any dependencies, such as the Plant class

class Squirrel {
    public:
        // Constructor
        Squirrel();

        // Interaction function with Plants
        void interact(Plant& plant);

    // private:
    //     // Cricket properties
    //     int damage;
    //     // ... add additional properties as needed
};

#endif 