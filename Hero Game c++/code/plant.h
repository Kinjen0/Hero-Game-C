#ifndef PLANT_H
#define PLANT_H

#include "tomatoPlant.h"
#include "maps.h"
#include "enemy.h"
#include "cricket.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "run.h"
#include "plant2.h"
#include "plant3.h"
#include "squirrel.h"

class Plant {
public:
    // Constructor
    Plant();
    Plant(int healthpoints);

    // Interaction function with Hero
    void interactWithHero(Hero& hero);

    // Render function
    void render(sf::RenderWindow& window);

private:
    // Plant properties
    sf::Sprite sprite;
    int health;
};

#endif
