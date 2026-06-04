#include <iostream>
#include "EmailNotificacao.h"

void EmailNotificacao::enviar(std::string mensagem) {
    std::cout << "Enviando Email: "
              << mensagem << std::endl;
}