/*
speed
damage
health


*/

class Frog : public Enemy {
public:
    // Constructor to initialize frog with specific health points
    EnemyType2(int healthPoints) : Enemy(healthPoints) {}

    // Implementation of the interact() function for frogg
    void interact(Plant& plant) override {
        // Implement interaction logic for frog
        // ...
        std::cout << "EnemyType2 interacted with the plant." << std::endl;
    }
};

