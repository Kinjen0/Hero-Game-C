/*check collisions
health
movement
damage
animation


*/

class hero(){
    public:


    private:
	// Load the hero texture and sprite
	heroTileset.loadFromFile("graphics/farmerPoses.png");
	heroSprite.setTexture(heroTileset);
	heroSprite.setTextureRect(sf::IntRect(0, 40, 56, 108));


}