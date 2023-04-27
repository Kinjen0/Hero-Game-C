/*
speed
damage
health


*/

#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


#include "enemy.h"

#include "hero.h"

#include "plant.h"


class Frog : public Enemy {
public:
    // Constructor to initialize frog with specific health points
    Frog(int healthPoints) : Enemy(healthPoints) {}

    // Implementation of the interact() function for frogg
  //void interact(Plant& plant) override {
  //    // Implement interaction logic for frog
  //    // ...
  //    std::cout << "EnemyType2 interacted with the plant." << std::endl;
  //}
};

