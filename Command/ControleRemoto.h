#ifndef CONTROLEREMOTO_H
#define CONTROLEREMOTO_H

#include "Command.h"

class ControleRemoto {
private:
    Command* comando;

public:
    void setCommand(Command* comando) {
        this->comando = comando;
    }

    void pressionarBotao() {
        comando->execute();
    }
};

#endif