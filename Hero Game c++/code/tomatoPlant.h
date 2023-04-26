#pragma once
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
public:
    TomatoPlant();
    // Constructor to initialize TomatoPlant with specific health points
    TomatoPlant(int healthPoints) : Plant(healthPoints) {}

    //getternfuntions 
    sf::Sprite getSprite();



    // Implementation of the interact() function for TomatoPlant
    void interact(Enemy& enemy) override;

    // Implementation of the interact() function for Plant1 with hero
    void interact(Hero& hero) override;
};