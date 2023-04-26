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
	int map[10][10] = {
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,2,2,0,0,0,1 },
	{ 1,0,0,0,2,2,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
	};
	
public:
	Maps()
	{
		mapTexture.loadFromFile("Graphics/Grass.png");
		baseGround.setTexture(mapTexture);
		wallTexture.setTexture(mapTexture);
		baseGround.setTextureRect(sf::IntRect(32,32, 0, 0));
		wallTexture.setTextureRect(sf::IntRect(14, 14, 49, 33));
	}
	
	~Maps();

	sf::Sprite getBaseGround()
	{
		return baseGround;
	}
	sf::Sprite getWallTexture()
	{
		return wallTexture;
	}
	int* getMap()
	{
		return &map[10][10];
	}






};
