#ifndef GAME_H
#define GAME_H

#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>
#include <vector>
#include <SFML/Graphics.hpp>

// Include Hero and TomatoPlant class headers
#include "tomatoPlant.h"
#include "maps.h"
#include "enemy.h"
#include "cricket.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "plant2.h"
#include "plant3.h"
#include "squirrel.h"

class Game {
public:
    Game();
    void run();

private:
    sf::RenderWindow window_;   // Game window

    Hero hero_;                 // Hero object
    TomatoPlant tomatoPlant_;   // TomatoPlant object
    sf::Event event_;

    void handleInput();
    void update();
};

#endif /* GAME_H */
