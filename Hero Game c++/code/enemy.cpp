/*

movement


*/


#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


class Enemy {
public:
    // Constructor to initialize enemy with specific health points
    Enemy(int healthPoints) : healthPoints_(healthPoints) {}

    // Virtual function for enemy interaction with plants
    //virtual void interact(Plant& plant) = 0;

private:
    int healthPoints_; // Health points of the enemy
	sf::Texture frogTexture;
	sf::Texture cricketTexture;
	sf::Texture squirrelTexture;
	sf::Sprite enemy;
	sf::Vector2f direction;
	void init()
	{
		frogTexture.loadFromFile("graphics/frog.png");
		cricketTexture.loadFromFile("graphics/cricket.png");
		squirrelTexture.loadFromFile("graphics/squirrel.png");
	}
	void createEnemy()
	{
		//create an enemy somewhere on the players screen
		int x = rand() % 800;
		int y = rand() % 600;

		enemy.setPosition(x, y);
			
			int enemyType = rand() % 3;
			if (enemyType == 1)
			{
				enemy.setTexture(frogTexture);
				enemy.setScale(0.5f, 0.5f);
			}
			else if (enemyType == 2)
			{
				enemy.setTexture(cricketTexture);
				enemy.setScale(0.5f, 0.5f);
			}
			else // Add squirrel enemy type
			{
				enemy.setTexture(squirrelTexture);
				enemy.setScale(2.0f, 2.0f); // Scale the squirrel sprite
			}





	}
	void updateEnemy()
	{
		//make the enemy move randomly
		int x = rand() % 3 - 1;
		int y = rand() % 3 - 1;
		float speed = 100;
		direction.x = x;
		direction.y = y;

		enemy.move(direction * speed);

	}

	void interact();




};

