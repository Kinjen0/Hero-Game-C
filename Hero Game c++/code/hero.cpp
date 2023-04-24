/*check collisions
health
movement
damage
animation


*/
#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

class Hero {
	public:
		Hero(sf::Texture& texture, float x, float y) {
			sprite.setTexture(texture);
			sprite.setTexture("graphics/farmerPoses.png");
			sprite.setTextureRect(sf::IntRect(0, 40, 56, 108));
			sprite.setPosition(x, y);
		}

		void handleInput(sf::RenderWindow& window) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
				moveLeft();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
				moveRight();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
				moveUp();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
				moveDown();
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) {
            performAction();
        	}
		}

	private:
		sf::Sprite sprite;

		float moveSpeed = 2.f; // Speed of movement

		void moveLeft() {
			sprite.move(-moveSpeed, 0.f);
		}

		void moveRight() {
			sprite.move(moveSpeed, 0.f);
		}

		void moveUp() {
			sprite.move(0.f, -moveSpeed);
		}

		void moveDown() {
			sprite.move(0.f, moveSpeed);
		}


		void performAction() {
			// Action to be performed when right mouse button is clicked
			std::cout << "Performing action!" << std::endl;
		}
};
