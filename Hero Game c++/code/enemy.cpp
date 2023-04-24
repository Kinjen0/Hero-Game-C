/*

movement


*/
class enemies 
{
	void spawnEnemy()
	{
		CustomSprite enemy;

		int enemyType = rand() % 3;
		if (enemyType == ENEMY_FROG)
		{
			enemy.setTexture(frogTexture);
			enemy.setScale(0.5f, 0.5f);
		}
		else if (enemyType == ENEMY_CRICKET)
		{
			enemy.setTexture(cricketTexture);
			enemy.setScale(0.5f, 0.5f);
		}
		else // Add squirrel enemy type
		{
			loadSquirrelTexture();
			enemy.setTexture(squirrelTexture);
			enemy.setScale(2.0f, 2.0f); // Scale the squirrel sprite
			enemy.enemyType = ENEMY_SQUIRREL;

			int row = rand() % 4;
			enemy.direction = row;
			int col = rand() % 8;
			enemy.setTextureRect(sf::IntRect(32 * col, 32 * row, 32, 32));
		}

		sf::Vector2f viewCenter = view.getCenter();
		int x = viewCenter.x + (rand() % static_cast<int>(viewSize.x - enemy.getLocalBounds().width)) - viewSize.x / 2;
		int y = viewCenter.y + (rand() % static_cast<int>(viewSize.y - enemy.getLocalBounds().height)) - viewSize.y / 2;

		enemy.setPosition(x, y);
		enemies.push_back(enemy);
	}


	void updateEnemies(float deltaTime)
	{
		sf::Vector2f playerPos = heroSprite.getPosition();
		float enemySpeed = 100.0f;

		for (auto& enemy : enemies)
		{
			// Calculate the direction vector from the enemy to the player
			sf::Vector2f direction = playerPos - enemy.getPosition();

			// Fix the direction vector so it acually points to the player
			float length = std::sqrt(direction.x * direction.x + direction.y * direction.y);
			direction.x /= length;
			direction.y /= length;

			// Determine the animation row based on the direction 
			//this will be used later to create the specefic animation
			int prevDirection = enemy.direction;
			if (std::abs(direction.x) > std::abs(direction.y))
			{
				if (direction.x > 0)
					enemy.direction = 0; // Moving right
				else
					enemy.direction = 1; // Moving left
			}
			else
			{
				if (direction.y > 0)
					enemy.direction = 2; // Moving down
				else
					enemy.direction = 3; // Moving up
			}

			// Move the enemy towards the player
			enemy.move(direction * enemySpeed * deltaTime);


		}
	}

}

class Enemy {
public:
    // Constructor to initialize enemy with specific health points
    Enemy(int healthPoints) : healthPoints_(healthPoints) {}

    // Virtual function for enemy interaction with plants
    virtual void interact(Plant& plant) = 0;

protected:
    int healthPoints_; // Health points of the enemy
};

