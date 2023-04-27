#ifndef SQUIRREL_H
#define SQUIRREL_H

#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


#include "enemy.h"


#include "plant.h" // Include any dependencies, such as the Plant class

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