#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


#include "run.h"
#include "maps.h"
#include "enemy.h"
#include "cricket.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "plant2.h"
#include "plant3.h"
#include "squirrel.h"


class TomatoPlant : public Plant {
private:
    int healthPoints = 50;

public:

    TomatoPlant()
    {
        healthPoints = 50;
    }
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