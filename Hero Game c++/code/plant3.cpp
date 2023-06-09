
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
#include "plant2.h"
#include "run.h"
#include "squirrel.h"

class Plant3 : public Plant {
public:
    // Constructor to initialize Plant3 with specific health points
    Plant3(int healthPoints) : Plant(healthPoints) {}

    // Implementation of the interact() function for Plant3
    void interact(Enemy& enemy) override {
        // Implement interaction logic for Plant3
        // ...
        std::cout << "Plant3 interacted with the enemy." << std::endl;
    }

    // Implementation of the interact() function for Plant3 with hero
    void interact(Hero& hero) override {
        // Implement interaction logic for Plant3 with hero
        // ...
        std::cout << "Plant3 interacted with the hero." << std::endl;
    }

private:
    sf::Sprite sprite;
    int health;

};