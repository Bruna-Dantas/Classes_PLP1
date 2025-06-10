#include "Gerente.h"
#include <iostream>
using namespace std;

Gerente::Gerente(int i, const string& n, float sb, float bonus)
    : Funcionario(i, n, sb), bonusMensal(bonus) {}

void Gerente::setBonusMensal(float b) {
    bonusMensal = b;
}

float Gerente::getBonusMensal() const {
    return bonusMensal;
}

float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus: " << bonusMensal << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}
