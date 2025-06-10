#include "funcionario.h"
#include <iostream>
using namespace std;

Funcionario::Funcionario(int i, string n, float sb)
    : id(i), nome(n), salarioBase(sb) {}

int Funcionario::getId()  {
    return id;
}

void Funcionario::setId(int i) {
    id = i;
}

string Funcionario::getNome()  {
    return nome;
}

void Funcionario::setNome(string n) {
    nome = n;
}

float Funcionario::getSalarioBase()  {
    return salarioBase;
}

void Funcionario::setSalarioBase(float sb) {
    salarioBase = sb;
}

void Funcionario::exibirInformacoes() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Salário Base: " << salarioBase << endl;
}
