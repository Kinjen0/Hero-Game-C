#ifndef PLANT3_H
#define PLANT3_H

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

class Plant3 {
public:
    // Constructor
    Plant3();

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