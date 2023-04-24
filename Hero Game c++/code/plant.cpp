#include "SFML/Graphics.hpp"
#include <iostream>
#include <SFML/Audio.hpp>
#include <cmath>


class Plant {
public:
    virtual void talk() = 0; // Virtual function for talking

    // Function for hero interaction
    void interact() {
        talk();
    }
};

