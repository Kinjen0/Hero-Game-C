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
        Game() : window_(sf::VideoMode(800, 600), "My Game") {
            // Load hero texture and create hero object
            sf::Texture heroTexture;
            
            if (!heroTexture.loadFromFile("hero.png")) {
                // Handle error if texture fails to load
            }
            hero_ = Hero(heroTexture, 400.f, 300.f);

            // Load tomato plant texture and create tomato plant object
            sf::Texture tomatoPlantTexture;
            if (!tomatoPlantTexture.loadFromFile("tomato_plant.png")) {
                // Handle error if texture fails to load
            }
 //tomatoPlant_ = TomatoPlant(tomatoPlantTexture, sf::Vector2f(200.f, 200.f));
//commenting out to get it running quicker
            //create the maps
            Maps map;
            sf::Sprite baseGround;
            baseGround = map.getBaseGround();
            sf::Sprite wallSprite;
            wallSprite = map.getWallTexture();
            //get the map array

            int mapArray[10][10] = {
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
            //create the map
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if (mapArray[i][j] == 1)
                    {
                        wallSprite.setPosition(i * 32, j * 32);
                        window_.draw(wallSprite);
					}
                    else
                    {
						baseGround.setPosition(i * 32, j * 32);
						window_.draw(baseGround);
					}
				}
			}

            //create a view 
            static sf::View view(sf::FloatRect(0, 0, 800, 600));
            window_.setView(view);

            // Set up the game window
            // ...
        }

        void run() {
            while (window_.isOpen()) {
                sf::Event event;
                while (window_.pollEvent(event)) {
                    if (event.type == sf::Event::Closed) {
                        window_.close();
                    }
                }

                // Handle input and update game state
                handleInput();
                update();

                // Clear the window
                window_.clear();

                // Draw game objects
                window_.draw(hero_.getSprite());
                window_.draw(tomatoPlant_.getSprite());

                // Display the window
                window_.display();
            }
        }

    private:
        sf::RenderWindow window_;   // Game window
        Hero hero_;                 // Hero object
        TomatoPlant tomatoPlant_;   // TomatoPlant object
        sf::Event event;

        void handleInput() {
            // Handle input for hero movement
            // ...


            hero_.handleInput(event);

            hero_.update();

            


            // Handle input for hero action (e.g. right mouse click)
            if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
                hero_.action();
            }
        }


        void update() {
            // Update game state
            // ...

            // Update hero animation
            hero_.updateAnimation();

            // Check for collision between hero and tomato plant
            if (hero_.getSprite().getGlobalBounds().intersects(tomatoPlant_.getSprite().getGlobalBounds())) {
                // Perform action when hero collides with tomato plant (e.g. show dialogue)
                tomatoPlant_.interact(hero_);
            }
        }
};
