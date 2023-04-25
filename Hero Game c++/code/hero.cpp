#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>

enum class Direction {
    None = -1,
    Down = 0,
    Left = 1,
    Up = 2,
    Right = 3
};

class Hero {
public:
    Hero(sf::Texture& texture, float x, float y)
        : sprite_(texture), position_(sf::Vector2f(x, y)), currentDirection_(Direction::None), currentFrame_(0), frameDuration_(0.2f),
        movingLeft(false), movingRight(false), movingUp(false), movingDown(false) {
        sprite_.setPosition(position_);
    }

    void handleInput(const sf::Event& event) {
        if (event.type == sf::Event::KeyPressed) {
            switch (event.key.code) {
            case sf::Keyboard::A:
                movingLeft = true;
                break;
            case sf::Keyboard::D:
                movingRight = true;
                break;
            case sf::Keyboard::W:
                movingUp = true;
                break;
            case sf::Keyboard::S:
                movingDown = true;
                break;
            default:
                break;
            }
        }
        else if (event.type == sf::Event::KeyReleased) {
            switch (event.key.code) {
            case sf::Keyboard::A:
                movingLeft = false;
                break;
            case sf::Keyboard::D:
                movingRight = false;
                break;
            case sf::Keyboard::W:
                movingUp = false;
                break;
            case sf::Keyboard::S:
                movingDown = false;
                break;
            default:
                break;
            }
        }
    }

    void update() {
        Direction prevDirection = currentDirection_;

        if (movingLeft) {
            move(Direction::Left);
        }
        if (movingRight) {
            move(Direction::Right);
        }
        if (movingUp) {
            move(Direction::Up);
        }
        if (movingDown) {
            move(Direction::Down);
        }

        if (!movingLeft && !movingRight && !movingUp && !movingDown) {
            currentDirection_ = Direction::None;
        }

        if (prevDirection != currentDirection_) {
            updateAnimation();
        }
    }

    void move(Direction direction) {
        currentDirection_ = direction;

        switch (direction) {
        case Direction::Left:
            position_.x -= moveSpeed;
            break;
        case Direction::Right:
            position_.x += moveSpeed;
            break;
        case Direction::Up:
            position_.y -= moveSpeed;
            break;
        case Direction::Down:
            position_.y += moveSpeed;
            break;
        default:
            break;
        }

        sprite_.setPosition(position_);
    }

    const sf::Sprite& getSprite() const {
        return sprite_;
    }

private:
    sf::Sprite sprite_;
	//why'd you delete all the comments here?
    // sf::Vector2f position_;
    // Direction currentDirection_;
    // int currentFrame_;
    // sf::Clock clock_;
    // float frameDuration_;
    // int frameWidth_ = 32;
    // int frameHeight_ = 32;
    // int numFrames_ = 4;

    float moveSpeed = 2.f;

    bool movingLeft;
    bool movingRight;
    bool movingUp;
    bool movingDown;

    void updateAnimation() {
        if (currentDirection_ != Direction::None) {
            float elapsedTime = clock_.getElapsedTime().asSeconds();

            if (elapsedTime >= frameDuration_) {
                currentFrame_++;

                if (currentFrame_ >= numFrames_) {
                    currentFrame_ = 0;
                }
            }
        }
        else {
            currentFrame_ = 0;  // Set to the idle frame when not moving
        }

        sf::IntRect textureRect(currentFrame_ * frameWidth_, static_cast<int>(currentDirection_) * frameHeight_, frameWidth_, frameHeight_);
        sprite_.setTextureRect(textureRect);

        if (currentDirection_ != Direction::None) {
            clock_.restart();
        }
    }
}