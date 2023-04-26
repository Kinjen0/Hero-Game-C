
#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

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

class Cricket : public Enemy {
public:
    // Constructor to initialize cricket with specific health points
    Cricket(int healthPoints) : Enemy(healthPoints) {}

    // Implementation of the interact() function for cricket
    void interact(Plant& plant) override {
        // Reduce the health points of the plant when cricket interacts with it
        plant.decreaseHealth(5); // Example: reduce plant health points by 5
        std::cout << "Pest attacked the plant! Plant health points decreased by 5." << std::endl;
    }
};
