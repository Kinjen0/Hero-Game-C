#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>
#include <vector>

class Enemy {
public:
    Enemy(sf::Texture& texture, int enemyType);
    void update(float dt);
    void render(sf::RenderWindow& window);
private:
    sf::Sprite sprite;
    int enemyType;
    int direction;
    float animationTimer;
    int textureColumn;
    float animationSpeed;
};

class Hero {
public:
    Hero(sf::Texture& texture);
    void update(float dt);
    void render(sf::RenderWindow& window);
    void handleInput();
private:
    sf::Sprite sprite;
    sf::Vector2f position;
    int speed;
    bool movingLeft;
    bool movingRight;
    bool movingUp;
    bool movingDown;
};

class Game {
public:
    void run();
private:
    void init();
    void handleInput();
    void update();
    void render();
    void spawnEnemy();
    void loadTextures();
    void loadFont();
private:
    sf::Vector2f viewSize;
    sf::RenderWindow window;
    sf::Texture background;
    sf::Sprite backgroundSprite;
    Hero hero;
    std::vector<Enemy> enemies;
    sf::Font font;
    sf::View view;
    unsigned int score;
    sf::Text scoreText;
    int playerHealth;
    sf::Text playerHealthText;
    float spawnTimer;
    const float CHARACTER_SCALE;
    const int MAX_ENEMIES;
    const float SPAWN_INTERVAL;
    const int TILE_SIZE;
    const int TILES_IN_ROW;
    const int TILES_IN_COLUMN;
    const int TILE_COLUMN;
    const int TILE_ROW;
    const int BACKGROUND_WIDTH;
    const int BACKGROUND_HEIGHT;
    sf::Texture tilesetTexture;
    const int VISIBLE_TILES_X;
    const int VISIBLE_TILES_Y;
};

Enemy::Enemy(sf::Texture& texture, int enemyType) {
    sprite.setTexture(texture);
    this->enemyType = enemyType;
    // Set initial position, direction, animation timer, texture column, and animation speed
    // ...
}

void Enemy::update(float dt) {
    // Update enemy's position, animation, etc.
    // ...
}

void Enemy::render(sf::RenderWindow& window) {
    window.draw(sprite);
}

Hero::Hero(sf::Texture& texture) {
    sprite.setTexture(texture);
    // Set initial position, speed, and moving flags
    // ...
}

void Hero::update(float dt) {
    // Update hero's position, animation, etc.
    // ...
}

void Hero::render(sf::RenderWindow& window) {
    window.draw(sprite);
}

void Hero::handleInput() {
    // Handle hero's input for movement, attacks, etc.
    // ...
}

void Game::run() {
    init();

    while (window.isOpen()) {
        handleInput();
        update();
        render();
    }
}

void Game::init() {
    viewSize = sf::Vector2f(1280, 1040);
    window.create(sf::VideoMode(viewSize.x, viewSize.y), "SFML works!");

    // Load the background texture and sprite
    //background.loadFromFile("Assets/Graphics/farm.png");
    //backgroundSprite.setTexture(background);

    // Load the hero texture and create hero object
    sf::Texture heroTexture;
    heroTexture.loadFromFile("Assets/Graphics/farmer.png");
    hero = Hero(heroTexture);
    // ...

    // Load the font
    font.loadFromFile("Alkatra-VariableFont_wght.ttf");

    // Load the tileset texture
    tilesetTexture.loadFromFile("Assets");
}

void Game::handleInput() {
    // Handle input for hero and other game events
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }

    hero.handleInput(); // Delegate hero's input handling to hero object
}

void Game::update() {
    float dt = clock.restart().asSeconds(); // Get delta time

    hero.update(dt); // Update hero object

    for (auto& enemy : enemies) {
        enemy.update(dt); // Update each enemy object
    }

    spawnTimer += dt;
    if (spawnTimer >= SPAWN_INTERVAL && enemies.size() < MAX_ENEMIES) {
        spawnEnemy(); // Spawn enemy at regular intervals
        spawnTimer = 0.f;
    }

    // Check for collisions, game over conditions, etc.
    // ...
}

void Game::render() {
    window.clear(sf::Color::Black);

    window.setView(view);
    window.draw(backgroundSprite); // Draw background
    hero.render(window); // Draw hero

    for (const auto& enemy : enemies) {
        enemy.render(window); // Draw each enemy
    }

    window.setView(window.getDefaultView());
    window.draw(scoreText); // Draw score text
    window.draw(playerHealthText); // Draw player health text

    window.display();
}

void Game::spawnEnemy() {
    // Spawn enemy with random type, initial position, etc.
    // ...
    Enemy enemy(enemyTexture, enemyType);
    enemies.push_back(enemy);
}

void Game::loadTextures() {
    // Load all the game textures
    // ...
}

void Game::loadFont() {
    // Load game font
    // ...
}

