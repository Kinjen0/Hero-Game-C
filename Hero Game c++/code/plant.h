#ifndef PLANT_H
#define PLANT_H

#include "enemy.h"

#include "hero.h"


class Plant {
public:
    // Constructor
    Plant();
    Plant(int healthpoints);

    // Interaction function with Hero
    void interactWithHero(Hero& hero);

    // Render function
    void render(sf::RenderWindow& window);

    virtual void interact(Enemy& enemy) = 0;

    // Implementation of the interact() function for Plant1 with hero
    virtual void interact(Hero& hero) = 0;

    

private:
    // Plant properties
    sf::Sprite sprite;
    int health;
};

#endif
