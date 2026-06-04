#include "FabricaSMS.h"
#include "SMSNotificacao.h"

Notificacao* FabricaSMS::criarNotificacao() {
    return new SMSNotificacao();
}