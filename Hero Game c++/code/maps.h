#pragma once
#include <SFML/Graphics.hpp>


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
