#ifndef GERENTE_H
#define GERENTE_H

#include "funcionario.h"
using namespace std;

class Gerente : public Funcionario {
private:
    float bonusMensal;

public:
    Gerente(int i, string n, float sb, float bonus);
    void setBonusMensal(float b);
    float getBonusMensal();

    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif
