#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

#include "plant.h"
#include "enemy.h"
#include "hero.h"


class TomatoPlant : public Plant {
public:
    TomatoPlant();
    // Constructor to initialize TomatoPlant with specific health points
    TomatoPlant(int healthPoints) : Plant(healthPoints) {}

    //getternfuntions 
    sf::Sprite getSprite();



    // Implementation of the interact() function for TomatoPlant
    //void interact(Enemy& enemy) override;

    // Implementation of the interact() function for Plant1 with hero
    //void interact(Hero & hero) override;
};