#include "gerente.h"
#include <iostream>
using namespace std;

Gerente::Gerente(int i, string n, float sb, float bonus)
    : Funcionario(i, n, sb), bonusMensal(bonus) {}

void Gerente::setBonusMensal(float b) {
    bonusMensal = b;
}

float Gerente::getBonusMensal()  {
    return bonusMensal;
}

float Gerente::calcularSalarioFinal() {
    return salarioBase + bonusMensal;
}

void Gerente::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Gerente" << endl;
    cout << "Bônus Mensal: " << bonusMensal << endl;
    cout << "Salário Final: " << calcularSalarioFinal() << endl;
}
