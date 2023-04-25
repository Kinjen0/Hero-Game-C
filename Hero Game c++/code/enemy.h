#pragma once

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
	void init();
	void createEnemy();
	void updateEnemy();
};

