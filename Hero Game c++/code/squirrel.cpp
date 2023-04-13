







	enemy.animationTimer += deltaTime;
	if (enemy.animationTimer > enemy.animationSpeed)
	{
		enemy.animationTimer = 0.0f;
		enemy.textureColumn++;
		if (enemy.textureColumn >= 8)
		{
			enemy.textureColumn = 0;
		}

		int row = enemy.direction;
		sf::IntRect rect(enemy.textureColumn * 32, row * 32, 32, 32);
		enemy.setTextureRect(rect);
	}

	void loadSquirrelTexture()
	{
		squirrelTexture.loadFromFile("Assets/Graphics/squirrel.png");
		squirrelTexture.setSmooth(true);
	}