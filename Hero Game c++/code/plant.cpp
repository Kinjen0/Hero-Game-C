#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>
#include "hero.h"
#include "enemy.h"


class Plant {
public:
    // Constructor to initialize plant with default health points
    Plant()
    {
        healthPoints_ = 50;
    }
    // Constructor to initialize plant with specific health points
    Plant(int healthPoints) : healthPoints_(healthPoints) {
        healthPoints_ = healthPoints;
    }
    Plant(int healthpoints)
    {
        healthPoints_= healthpoints;
    }

    // Virtual function for plant interaction with enemies
    virtual void interact(Enemy& enemy) = 0;

    // Virtual function for plant interaction with hero
    virtual void interact(Hero& hero) = 0;

    // Function to decrease health points of the plant
    void decreaseHealth(int amount) {
        healthPoints_ -= amount;
    }

    // Function to increase health points of the plant
    void increaseHealth(int amount) {
        healthPoints_ += amount;
    }

    // Function to get current health points of the plant
    int getHealthPoints() const {
        return healthPoints_;
    }

protected:
    int healthPoints_; // Health points of the plant
};

