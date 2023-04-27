#ifndef HERO_H
#define HERO_H


class Hero {
public:
    // Constructor
    Hero();
    Hero(sf::Texture& texture, float x, float y);
    // Movement functions
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

    //getters
    sf::Sprite getSprite() const;

    //update animation
    void updateAnimation();

    //handle input
    void handleInput(sf::Event event);

    //update function
    void update();

    
    //action function for now
    void action();

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