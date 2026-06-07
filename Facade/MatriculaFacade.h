#ifndef MATRICULAFACADE_H
#define MATRICULAFACADE_H

#include "Aluno.h"
#include "Disciplina.h"
#include "Financeiro.h"
#include "Historico.h"

class MatriculaFacade {
private:
    Aluno aluno;
    Disciplina disciplina;
    Financeiro financeiro;
    Historico historico;

public:
    void realizarMatricula() {

        std::cout << "\n=== Processo de Matricula ===\n"
                  << std::endl;

        aluno.verificarCadastro();

        disciplina.verificarVagas();

        disciplina.registrarMatricula();

        historico.atualizarHistorico();

        financeiro.gerarBoleto();

        std::cout << "\nMatricula realizada com sucesso!"
                  << std::endl;
    }
};

#endif