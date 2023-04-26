/*
speed
damage
health


*/

#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

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

class Frog : public Enemy {
public:
    // Constructor to initialize frog with specific health points
    Frog(int healthPoints) : Enemy(healthPoints) {}

    // Implementation of the interact() function for frogg
    void interact(Plant& plant) override {
        // Implement interaction logic for frog
        // ...
        std::cout << "EnemyType2 interacted with the plant." << std::endl;
    }
};

