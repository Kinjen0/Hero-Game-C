




#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


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
#include "run.h"

class Squirrel : public Enemy {
public:
    // Constructor to initialize squirrel with specific health points
    Squirrel(int healthPoints) : Enemy(healthPoints) {}

    // Implementation of the interact() function for squirrel
    void interact(Plant& plant) override {
        // Implement interaction logic for squirrel
        // ...
        std::cout << "EnemyType3 interacted with the plant." << std::endl;
    }
};


	// enemy.animationTimer += deltaTime;
	// if (enemy.animationTimer > enemy.animationSpeed)
	// {
	// 	enemy.animationTimer = 0.0f;
	// 	enemy.textureColumn++;
	// 	if (enemy.textureColumn >= 8)
	// 	{
	// 		enemy.textureColumn = 0;
	// 	}

	// 	int row = enemy.direction;
	// 	sf::IntRect rect(enemy.textureColumn * 32, row * 32, 32, 32);
	// 	enemy.setTextureRect(rect);
	// }

	// void loadSquirrelTexture()
	// {
	// 	squirrelTexture.loadFromFile("Assets/Graphics/squirrel.png");
	// 	squirrelTexture.setSmooth(true);
	// }