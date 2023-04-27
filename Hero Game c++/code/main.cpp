#include <SFML/Graphics.hpp>
#include "run.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Hero Game");
	Game game;
	game.run();
	return 0;

}