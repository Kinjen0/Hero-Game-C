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

		// Constructor to initialize hero
		Hero(sf::Texture& texture, sf::Vector2f position)
			: sprite_(texture), position_(position), currentDirection_(Direction::None), currentFrame_(0), frameDuration_(0.2f) {
			// Set the initial sprite position
			sprite_.setPosition(position_);
		}

		// Function to handle hero movement
		void move(Direction direction) {
			currentDirection_ = direction;
			// Update hero position based on movement direction
			// ...

			// Update hero animation frame
			updateAnimation();
		}

		// Function to update hero animation
		void updateAnimation() {
			// Calculate elapsed time since last frame update
			float elapsedTime = clock_.getElapsedTime().asSeconds();

			// Check if enough time has passed for next frame
			if (elapsedTime >= frameDuration_) {
				// Increment current frame
				currentFrame_++;

				// Wrap around to the first frame if reached the last frame
				if (currentFrame_ >= numFrames_) {
					currentFrame_ = 0;
				}

				// Update hero sprite texture rect to show the correct frame
				sf::IntRect textureRect(currentFrame_ * frameWidth_, currentDirection_ * frameHeight_, frameWidth_, frameHeight_);
				sprite_.setTextureRect(textureRect);

				// Restart the clock for the next frame update
				clock_.restart();
			}
		}


	private:
		sf::Sprite sprite;
		sf::Sprite sprite_;               // Hero sprite
		sf::Vector2f position_;          // Hero position
		Direction currentDirection_;     // Current movement direction
		int currentFrame_;               // Current animation frame
		sf::Clock clock_;                // Clock for frame updates
		float frameDuration_;            // Duration between animation frames
		int frameWidth_ = 32;            // Width of each frame in the sprite sheet
		int frameHeight_ = 32;           // Height of each frame in the sprite sheet
		int numFrames_ = 4;              // Number of frames in each animation sequence


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
