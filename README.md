# Sistema de Gerenciamento de Contas

## Descrição

Este projeto implementa um sistema simples de gerenciamento de contas bancárias em C++. Ele permite que os usuários realizem operações básicas como depósitos, saques, consultas de saldo e transferências entre contas.

## Funcionalidades

O código possui as seguintes funcionalidades:

1. **Depositar**: Permite ao usuário adicionar um valor ao saldo da conta.
2. **Sacar**: Permite ao usuário retirar um valor do saldo, desde que haja saldo suficiente.
3. **Consultar Saldo**: Exibe o saldo atual da conta.
4. **Transferir**: Permite que o usuário transfira um valor de uma conta para outra, desde que haja saldo suficiente.

## Estrutura do Código

O código é dividido em uma classe chamada `Conta`, que contém as seguintes partes principais:

- **Atributo**:
  - `double saldo`: Armazena o saldo atual da conta.

- **Métodos**:
  - `Conta()`: Construtor que inicializa o saldo como 0.
  - `void depositar(double valor)`: Adiciona um valor ao saldo.
  - `void sacar(double valor)`: Remove um valor do saldo, se houver saldo suficiente.
  - `void consultarSaldo()`: Exibe o saldo atual da conta.
  - `void transferir(Conta &destino, double valor)`: Transfere um valor para outra conta, se houver saldo suficiente.

## Uso

Para executar o programa, siga os passos abaixo:

1. Compile o código em um ambiente que suporte C++.
2. Execute o programa.
3. Escolha uma das opções disponíveis no menu:
   - **1**: Depositar
   - **2**: Sacar
   - **3**: Consultar Saldo
   - **4**: Transferir
   - **0**: Sair

4. Siga as instruções para inserir os valores necessários conforme solicitado.

## Exemplo de Uso

Após iniciar o programa, o usuário verá um menu como este:

```
1. Depositar
2. Sacar
3. Consultar Saldo
4. Transferir
0. Sair
Escolha: 
```

O usuário pode então inserir a opção desejada e seguir as instruções subsequentes.

## Requisitos

- Compilador C++ (como g++, Visual Studio, etc.)
- Conhecimentos básicos de linha de comando para compilar e executar o programa.
