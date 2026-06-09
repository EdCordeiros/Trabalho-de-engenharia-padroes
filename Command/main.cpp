#include "Luz.h"
#include "LigarLuzCommand.h"
#include "DesligarLuzCommand.h"
#include "ControleRemoto.h"

int main() {

    Luz luz;

    LigarLuzCommand ligar(&luz);
    DesligarLuzCommand desligar(&luz);

    ControleRemoto controle;

    controle.setCommand(&ligar);
    controle.pressionarBotao();

    controle.setCommand(&desligar);
    controle.pressionarBotao();

    return 0;
}