#ifndef LIGARLUZCOMMAND_H
#define LIGARLUZCOMMAND_H

#include "Command.h"
#include "Luz.h"

class LigarLuzCommand : public Command {
private:
    Luz* luz;

public:
    LigarLuzCommand(Luz* luz) {
        this->luz = luz;
    }

    void execute() override {
        luz->ligar();
    }
};

#endif