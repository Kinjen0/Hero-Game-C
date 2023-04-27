#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


#include "enemy.h"

#include "hero.h"

#include "plant.h"


class TomatoPlant : public Plant {
private:
    int healthPoints = 50;

public:
    TomatoPlant(sf::Texture tomatoPlantTexture, sf::Vector2f());

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

    void decreaseHealth(int damage) {
		healthPoints -= damage;
	}

    // Implementation of the interact() function for Plant1 with hero
    void interact(Hero& hero) override {
        // Implement interaction logic for TomatoPlant with hero
        // ...
        std::cout << "Tomato pLant interacted with the hero." << std::endl;
    }
};