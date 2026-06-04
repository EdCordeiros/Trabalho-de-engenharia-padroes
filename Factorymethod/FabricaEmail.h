#ifndef FABRICAEMAIL_H
#define FABRICAEMAIL_H

#include "FabricaNotificacao.h"

class FabricaEmail : public FabricaNotificacao {
public:
    Notificacao* criarNotificacao() override;
};

#endif