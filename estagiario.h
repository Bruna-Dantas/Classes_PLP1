#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "funcionario.h"
using namespace std;

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    Estagiario(int i, string n, float sb, int ht);
    void setHorasTrabalhadas(int ht);
    int getHorasTrabalhadas();

    float calcularSalarioFinal();
    void exibirInformacoes();
};

#endif
