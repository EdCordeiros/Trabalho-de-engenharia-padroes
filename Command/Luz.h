#ifndef LUZ_H
#define LUZ_H

#include <iostream>

class Luz {
public:
    void ligar() {
        std::cout << "Luz ligada." << std::endl;
    }

    void desligar() {
        std::cout << "Luz desligada." << std::endl;
    }
};

#endif