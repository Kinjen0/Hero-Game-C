#ifndef PLANT2_H
#define PLANT2_H

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