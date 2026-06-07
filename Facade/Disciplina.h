#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <iostream>

class Disciplina {
public:
    void verificarVagas() {
        std::cout << "Vagas disponiveis verificadas." << std::endl;
    }

    void registrarMatricula() {
        std::cout << "Matricula registrada na disciplina." << std::endl;
    }
};

#endif