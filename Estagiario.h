#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "Funcionario.h"

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    Estagiario(int i, const string& n, float sb, int ht);
    void setHorasTrabalhadas(int ht);
    int getHorasTrabalhadas() const;

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif
