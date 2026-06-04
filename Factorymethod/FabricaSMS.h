#ifndef FABRICASMS_H
#define FABRICASMS_H

#include "FabricaNotificacao.h"

class FabricaSMS : public FabricaNotificacao {
public:
    Notificacao* criarNotificacao() override;
};

#endif