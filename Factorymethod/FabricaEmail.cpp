#include "FabricaEmail.h"
#include "EmailNotificacao.h"

Notificacao* FabricaEmail::criarNotificacao() {
    return new EmailNotificacao();
}