#include <iostream>
using namespace std;

class Conta {
private:
    double saldo;

public:
    Conta() : saldo(0.0) {}

    void depositar(double valor) {
        saldo += valor;
        cout << "Depósito de R$ " << valor << " realizado.\n";
    }

    void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Saque de R$ " << valor << " realizado.\n";
        } else {
            cout << "Saldo insuficiente.\n";
        }
    }

    void consultarSaldo() {
        cout << "Saldo atual: R$ " << saldo << endl;
    }

    void transferir(Conta &destino, double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            destino.depositar(valor);
            cout << "Transferência de R$ " << valor << " realizada.\n";
        } else {
            cout << "Saldo insuficiente para transferência.\n";
        }
    }
};

int main() {
    Conta conta1, conta2;
    int opcao;
    double valor;
    
    do {
        cout << "1. Depositar\n2. Sacar\n3. Consultar Saldo\n4. Transferir\n0. Sair\nEscolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor para depósito: ";
                cin >> valor;
                conta1.depositar(valor);
                break;
            case 2:
                cout << "Digite o valor para saque: ";
                cin >> valor;
                conta1.sacar(valor);
                break;
            case 3:
                conta1.consultarSaldo();
                break;
            case 4:
                cout << "Digite o valor para transferência: ";
                cin >> valor;
                conta1.transferir(conta2, valor);
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida.\n";
        }
    } while (opcao != 0);

    return 0;
}
