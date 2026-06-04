#ifndef SMSNOTIFICACAO_H
#define SMSNOTIFICACAO_H

#include "Notificacao.h"

class SMSNotificacao : public Notificacao {
public:
    void enviar(std::string mensagem) override;
};

#endif