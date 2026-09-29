#include <stdio.h>
#include <locale.h>

// Crie um algoritmo que simule operações básicas de um caixa eletrônico.
// O usuário deverá iniciar com um saldo informado pelo programa e visualizar o seguinte menu:
// 1. Consultar saldo
// 2. Depositar
// 3. Sacar
// 4. Sair
// O programa deverá continuar apresentando o menu até que o usuário escolha a opção Sair.
// Para saques, o algoritmo deverá verificar se existe saldo suficiente.

int main() {

    setlocale(LC_ALL, ".UTF-8");

    float saldo = 1000.00;
    int opcao;
    float valor;

    do 
    {
        printf("\n--- Caixa Eletrônico ---\n");

        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) 
        {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor para depósito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) 
                {
                    saldo += valor;
                    printf("Depósito realizado com sucesso.\n");
                } 
                else 
                {
                    printf("Valor inválido.\n");
                }
                break;
            case 3:
                printf("Digite o valor para saque: R$ ");
                scanf("%f", &valor);
                if (valor > saldo) 
                {
                    printf("Operação negada: Saldo insuficiente.\n");
                } 
                else if (valor > 0) 
                {
                    saldo -= valor;
                    printf("Saque realizado com sucesso.\n");
                } 
                else 
                {
                    printf("Valor inválido.\n");
                }
                break;
            case 4:
                printf("Sessão encerrada.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}




