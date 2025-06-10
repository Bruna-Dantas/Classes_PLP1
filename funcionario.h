#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
private:
    int id;

protected:
    string nome;
    float salarioBase;

public:
    Funcionario(int i, string n, float sb);
    virtual ~Funcionario() {}

    int getId();
    void setId(int i);

    string getNome();
    void setNome(string n);

    float getSalarioBase();
    void setSalarioBase(float sb);

    virtual void exibirInformacoes();
    virtual float calcularSalarioFinal() = 0;
};

#endif
