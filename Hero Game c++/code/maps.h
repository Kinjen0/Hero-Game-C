#pragma once
#include <SFML/Graphics.hpp>


#include "tomatoPlant.h"
#include "run.h"
#include "enemy.h"
#include "cricket.h"
#include "frog.h"
#include "hero.h"
#include "maps.h"
#include "plant.h"
#include "plant2.h"
#include "plant3.h"
#include "squirrel.h"


class  Maps {
private:
	sf::Texture mapTexture;
	sf::Sprite baseGround;
	sf::Sprite wallTexture;
	int map[10][10];

public:
	Maps();

	~Maps();

	sf::Sprite getBaseGround();
		sf::Sprite getWallTexture();
		int getMap();






};
