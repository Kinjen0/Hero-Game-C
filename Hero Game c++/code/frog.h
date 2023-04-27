#ifndef FROG_H
#define FROG_H
#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


#include "enemy.h"

#include "hero.h"

#include "plant.h"

class Frog : public Enemy{
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