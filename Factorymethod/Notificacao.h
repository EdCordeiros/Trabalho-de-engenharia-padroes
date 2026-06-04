#ifndef NOTIFICACAO_H
#define NOTIFICACAO_H

#include <string>

class Notificacao {
public:
    virtual ~Notificacao();
    virtual void enviar(std::string mensagem) = 0;
};

#endif