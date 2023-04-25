#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

#include "plant.h"
#include "enemy.h"
#include "hero.h"


class TomatoPlant : public Plant {
public:
    // Constructor to initialize TomatoPlant with specific health points
    TomatoPlant(int healthPoints) : Plant(healthPoints) {}

    // Implementation of the interact() function for TomatoPlant
    void interact(Enemy& enemy) override {
        // Implement interaction logic for TomatoPlant
        // ...
        std::cout << "TomatoPlant interacted with the enemy." << std::endl;
        decreaseHealth(5);
    }

    // Implementation of the interact() function for Plant1 with hero
    void interact(Hero& hero) override {
        // Implement interaction logic for TomatoPlant with hero
        // ...
        std::cout << "Tomato pLant interacted with the hero." << std::endl;
    }
};