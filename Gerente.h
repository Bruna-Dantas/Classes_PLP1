#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario {
private:
    float bonusMensal;

public:
    Gerente(int i, const string& n, float sb, float bonus);
    void setBonusMensal(float b);
    float getBonusMensal() const;

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif
