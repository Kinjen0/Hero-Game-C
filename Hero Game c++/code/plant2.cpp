#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

#include "tomatoPlant.h"
#include "maps.h"
#include "enemy.h"
#include "cricket.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "run.h"
#include "plant3.h"
#include "squirrel.h"

class Plant2 : public Plant {
public:
    // Constructor to initialize Plant2 with specific health points
    Plant2(int healthPoints) : Plant(healthPoints) {}

    // Implementation of the interact() function for Plant2
    void interact(Enemy& enemy) override {
        // Implement interaction logic for Plant2
        // ...
        std::cout << "Plant2 interacted with the enemy." << std::endl;
    }

    // Implementation of the interact() function for Plant2 with hero
    void interact(Hero& hero) override {
        // Implement interaction logic for Plant2 with hero
        // ...
        std::cout << "Plant2 interacted with the hero." << std::endl;
    }
};