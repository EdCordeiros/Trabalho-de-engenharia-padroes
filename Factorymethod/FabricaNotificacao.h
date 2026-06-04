#ifndef FABRICANOTIFICACAO_H
#define FABRICANOTIFICACAO_H

#include "Notificacao.h"

class FabricaNotificacao {
public:
    virtual ~FabricaNotificacao() {}
    virtual Notificacao* criarNotificacao() = 0;
};

#endif