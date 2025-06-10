#include "Estagiario.h"
#include <iostream>
using namespace std;

Estagiario::Estagiario(int i, const string& n, float sb, int ht)
    : Funcionario(i, n, sb), horasTrabalhadas(ht) {}

void Estagiario::setHorasTrabalhadas(int ht) {
    horasTrabalhadas = ht;
}

int Estagiario::getHorasTrabalhadas() const {
    return horasTrabalhadas;
}

float Estagiario::calcularSalarioFinal() {
    return salarioBase * (horasTrabalhadas / 160.0);
}

void Estagiario::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Estagiário" << endl;
    cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
    cout << "Salário final: " << calcularSalarioFinal() << endl;
}
