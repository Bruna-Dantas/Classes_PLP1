#include "desenvolvedor.h"
#include <iostream>
using namespace std;

Desenvolvedor::Desenvolvedor(int i, string n, float sb, int qp)
    : Funcionario(i, n, sb), quantidadeDeProjetos(qp) {}

void Desenvolvedor::setQuantidadeDeProjetos(int qp) {
    quantidadeDeProjetos = qp;
}

int Desenvolvedor::getQuantidadeDeProjetos()  {
    return quantidadeDeProjetos;
}

float Desenvolvedor::calcularSalarioFinal() {
    return salarioBase + (500 * quantidadeDeProjetos);
}

void Desenvolvedor::exibirInformacoes() {
    Funcionario::exibirInformacoes();
    cout << "Tipo: Desenvolvedor" << endl;
    cout << "Projetos: " << quantidadeDeProjetos << endl;
    cout << "Salário Final: " << calcularSalarioFinal() << endl;
}
