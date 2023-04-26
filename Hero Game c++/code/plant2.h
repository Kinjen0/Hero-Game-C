#ifndef PLANT2_H
#define PLANT2_H

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

class Plant2 {
public:
    // Constructor
    Plant2();

    // Interaction function with Hero
    void interactWithHero(Hero& hero);

    // Render function
    void render(sf::RenderWindow& window);

private:
    // Plant2 properties
    sf::Sprite sprite;
    int health;
};
#endif