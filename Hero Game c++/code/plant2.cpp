#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


class Plant2 : public Plant {
public:
    // Implementation of the talk() function for Plant2
    void talk() override {
        // Dialogue for Plant2
        std::cout << "Hey there, hero! I'm Plant2, the tough and tomboyish plant. How can I help you today?" << std::endl;
    }
};