#include <iostream>

#include "FabricaEmail.h"
#include "FabricaSMS.h"

void enviarMensagem(FabricaNotificacao& fabrica) {

    Notificacao* notificacao =
        fabrica.criarNotificacao();

    notificacao->enviar(
        "Bem-vindo ao sistema!"
    );

    delete notificacao;
}

Notificacao::~Notificacao() {}

int main() {

    std::cout
        << "Utilizando fábrica de Email:\n";

    FabricaEmail fabricaEmail;
    enviarMensagem(fabricaEmail);

    std::cout << "\n";

    std::cout
        << "Utilizando fábrica de SMS:\n";

    FabricaSMS fabricaSMS;
    enviarMensagem(fabricaSMS);

    return 0;
}