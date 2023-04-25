#ifndef PLANT_H
#define PLANT_H

class Plant {
public:
    // Constructor
    Plant();

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
