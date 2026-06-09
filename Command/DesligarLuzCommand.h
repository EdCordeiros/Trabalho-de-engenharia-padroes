#ifndef DESLIGARLUZCOMMAND_H
#define DESLIGARLUZCOMMAND_H

#include "Command.h"
#include "Luz.h"

class DesligarLuzCommand : public Command {
private:
    Luz* luz;

public:
    DesligarLuzCommand(Luz* luz) {
        this->luz = luz;
    }

    void execute() override {
        luz->desligar();
    }
};

#endif