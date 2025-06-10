#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "funcionario.h"
using namespace std;

class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;

public:
    Desenvolvedor(int i, string n, float sb, int qp);
    void setQuantidadeDeProjetos(int qp);
    int getQuantidadeDeProjetos();

    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif
