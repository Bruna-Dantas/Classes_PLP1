#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;
    float salarioBase;

private:
    int id;

public:
    Funcionario(int i, const string& n, float sb);

    virtual ~Funcionario() {}

    int getId() const;
    void setId(int i);

    string getNome() const;
    void setNome(const string& n);

    float getSalarioBase() const;
    void setSalarioBase(float sb);

    virtual void exibirInformacoes();

    virtual float calcularSalarioFinal() = 0;
};

#endif
