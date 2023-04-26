#ifndef PLANT3_H
#define PLANT3_H

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