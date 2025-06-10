#include <iostream>
#include <vector>
#include "Funcionario.h"
#include "Desenvolvedor.h"
#include "Gerente.h"
#include "Estagiario.h"

using namespace std;

int main() {
    vector<Funcionario*> funcionarios;
    int escolha;
    int contador = 0;

    cout << "=== Cadastro de Funcionarios (máximo 10) ===\n";

    while (contador < 10) {
        cout << "\nEscolha o tipo de funcionario:\n";
        cout << "1 - Desenvolvedor\n";
        cout << "2 - Gerente\n";
        cout << "3 - Estagiario\n";
        cout << "0 - Encerrar cadastro\n";
        cout << "Opcao: ";
        cin >> escolha;

        if (escolha == 0) {
            break;
        }

        int id;
        string nome;
        float salarioBase;

        cout << "ID: ";
        cin >> id;
        cout << "Nome: ";
        cin.ignore(); 
        getline(cin, nome);
        cout << "Salario base: ";
        cin >> salarioBase;

        switch (escolha) {
            case 1: {
                int projetos;
                cout << "Quantidade de projetos: ";
                cin >> projetos;
                funcionarios.push_back(new Desenvolvedor(id, nome, salarioBase, projetos));
                break;
            }
            case 2: {
                float bonus;
                cout << "Bonus mensal: ";
                cin >> bonus;
                funcionarios.push_back(new Gerente(id, nome, salarioBase, bonus));
                break;
            }
            case 3: {
                int horas;
                cout << "Horas trabalhadas: ";
                cin >> horas;
                funcionarios.push_back(new Estagiario(id, nome, salarioBase, horas));
                break;
            }
            default:
                cout << "Opcao invalida. Tente novamente.\n";
                continue;
        }

        contador++;
    }

    cout << "\n=== Relatorio de Funcionarios ===\n";
    for (Funcionario* f : funcionarios) {
        f->exibirInformacoes();
    }

    for (Funcionario* f : funcionarios) {
        delete f;
    }

    return 0;
}
