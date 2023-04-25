#pragma once
#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

#include "code/plant.h"
#include "code/plant.h"
#include "code/enemy.h"


class TomatoPlant : public Plant {
public:
    // Constructor to initialize TomatoPlant with specific health points
    TomatoPlant(int healthPoints) : Plant(healthPoints) {}

    // Implementation of the interact() function for TomatoPlant
    void interact(Enemy& enemy) override;

    // Implementation of the interact() function for Plant1 with hero
    void interact(Hero& hero) override;
};