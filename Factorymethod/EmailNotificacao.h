#ifndef EMAILNOTIFICACAO_H
#define EMAILNOTIFICACAO_H

#include "Notificacao.h"

class EmailNotificacao : public Notificacao {
public:
    void enviar(std::string mensagem) override;
};

#endif