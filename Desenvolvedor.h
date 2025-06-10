#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "Funcionario.h"

class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;

public:
    Desenvolvedor(int i, const string& n, float sb, int qp);
    void setQuantidadeDeProjetos(int qp);
    int getQuantidadeDeProjetos() const;

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif
