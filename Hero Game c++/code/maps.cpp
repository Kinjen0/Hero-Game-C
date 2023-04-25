#include <SFML/Graphics.hpp>


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
	maps()
	{
		mapTexture.loadFromFile("Graphics/Grass.png");
		baseGround.setTexture(mapTexture);
		wallTexture.setTexture(mapTexture);
		baseGround.setTextureRect(sf::IntRect(32,32, 0, 0));
		wallTexture.setTextureRect(sf::IntRect(14, 14, 49, 33));
	}
	
	~maps();

	void drawMap()
	{
		//draw the map onto the screen
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; i < 10; i++)
			{
				if (map[i][j] == 1)
				{
					baseGround.setPosition(i * 32, j * 32);
				}
				else if (map[i][j] == 2)
				{
					wallTexture.setPosition(i * 32, j * 32);
					
				}
			}
		}
	}





};