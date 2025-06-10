#include "Funcionario.h"
#include <iostream>
using namespace std;

Funcionario::Funcionario(int i, const string& n, float sb)
    : id(i), nome(n), salarioBase(sb) {}

int Funcionario::getId() const {
    return id;
}

void Funcionario::setId(int i) {
    id = i;
}

string Funcionario::getNome() const {
    return nome;
}

void Funcionario::setNome(const string& n) {
    nome = n;
}

float Funcionario::getSalarioBase() const {
    return salarioBase;
}

void Funcionario::setSalarioBase(float sb) {
    salarioBase = sb;
}

void Funcionario::exibirInformacoes() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Salário base: " << salarioBase << endl;
}
