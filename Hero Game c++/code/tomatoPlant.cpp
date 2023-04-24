#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


class TomatoPlant : public Plant {
public:
    // Implementation of the talk() function for TomatoPlant
    void talk() override {
        // Dialogue for TomatoPlant
        std::cout << "Hello, I'm a tomato plant! Welcome to the garden!" << std::endl;
    }
};