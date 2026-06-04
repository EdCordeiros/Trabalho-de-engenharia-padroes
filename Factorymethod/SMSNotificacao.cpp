#include <iostream>
#include "SMSNotificacao.h"

void SMSNotificacao::enviar(std::string mensagem) {
    std::cout << "Enviando SMS: "
              << mensagem << std::endl;
}