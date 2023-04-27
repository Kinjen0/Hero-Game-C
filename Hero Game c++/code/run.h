#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>
#include <vector>

// Include Hero and TomatoPlant class headers
#include "tomatoPlant.h"
#include "maps.h"
#include "enemy.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "squirrel.h"


class Game {
public:
    Game() : window_(sf::VideoMode(800, 600), "My Game") {};
    void run();

private:
    sf::RenderWindow window_;   // Game window
    Hero hero_;                 // Hero object
    TomatoPlant tomatoPlant_;   // TomatoPlant object
    sf::Event event;

    void handleInput();


    void update();
};
