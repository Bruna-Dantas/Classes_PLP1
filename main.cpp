#include <iostream>
#include <vector>
#include "funcionario.h"
#include "desenvolvedor.h"
#include "gerente.h"
#include "estagiario.h"

using namespace std;

int main() {
    vector<Funcionario*> funcionarios;
    int escolha;
    int contador = 0;

    while (contador < 10) {

        cout << "\nEscolha o tipo de Funcionário:\n";
        cout << "1 - Desenvolvedor\n";
        cout << "2 - Gerente\n";
        cout << "3 - Estagiário\n";

        if (contador >= 6) {
            cout << "0 - Encerrar\n";
        }
        cin >> escolha;

        if (escolha == 0 && contador >= 6) {
            break;

        } else if (escolha == 0 && contador < 6) {
            cout << "Você precisa cadastrar pelo menos 6 funcionários antes de encerrar.\n";
            continue;
        }

        int id;
        string nome;
        float salarioBase;

        cout << "\nID: ";
        cin >> id;

        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);

        cout << "Salario Base: ";
        cin >> salarioBase;

        switch (escolha) {
            case 1: {
                int projetos;
                cout << "Quantidade de Projetos: ";
                cin >> projetos;
                funcionarios.push_back(new Desenvolvedor(id, nome, salarioBase, projetos));
                break;
            }
            case 2: {
                float bonus;
                cout << "Bônus Mensal: ";
                cin >> bonus;
                funcionarios.push_back(new Gerente(id, nome, salarioBase, bonus));
                break;
            }
            case 3: {
                int horas;
                cout << "Horas Trabalhadas: ";
                cin >> horas;
                funcionarios.push_back(new Estagiario(id, nome, salarioBase, horas));
                break;
            }
            default:
                cout << "Opção Inválida! Tente novamente.\n";
                continue;
        }

        contador++;
    }

    for (Funcionario* f : funcionarios) {
        cout << "\n" << endl;
        f->exibirInformacoes();
    }

    for (Funcionario* f : funcionarios) {
        delete f;
    }

    return 0;
}
