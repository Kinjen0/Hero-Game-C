#ifndef HERO_H
#define HERO_H

class Hero {
public:
    // Constructor
    Hero();
    void handleInput(sf::Event event);
    // Movement functions
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

    // Action functions
    void waterSpell();
    void attackSpell();
    void healSpell();

    // Render function
    void render(sf::RenderWindow& window);

private:
    // Hero properties
    sf::Sprite sprite;
};
#endif