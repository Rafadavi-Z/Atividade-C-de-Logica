#include <stdio.h>
#include <locale.h>

// Elabore um algoritmo que calcule o valor a ser pago por um produto, considerando o preço normal da
// etiqueta e a condição de pagamento escolhida. 

// 1 - À vista em dinheiro ou cheque: 10% de desconto
// 2 - À vista no cartão de crédito: 15% de desconto
// 3 - Em duas parcelas: preço normal, sem juros
// 4 - Em duas parcelas: acréscimo de 10% sobre o preço normal

// O algoritmo deve ler:
// • o preço do produto;
// • o código da condição de pagamento;
// e apresentar o valor final a ser pago.

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    float preçoN;
    int condição;

    printf("Informe o preço do produto\n");
    scanf("%f", &preçoN);

    printf("Existe uma condição especial para cada tipo de pagamento\n1 - À vista em dinheiro ou cheque: 10 off\n2 - À vista no cartão de crédito: 15 off\n3 - Em duas parcelas: preço normal, sem juros\n4 - Em duas parcelas: acréscimo de 10 sobre o preço normal\nDigite o número da forma de pagamento\n");
    scanf("%d", &condição);

    switch (condição)
    {
    case 1:

        // 1 - À vista em dinheiro ou cheque: 10% de desconto
        preçoN = preçoN * (90.0/100);
        printf("O valor final a ser pago é de %.2f", preçoN);
        break;
    
    case 2:

        // 2 - À vista no cartão de crédito: 15% de desconto
        preçoN = preçoN * (85.0/100);
        printf("O valor final a ser pago é de %.2f", preçoN);
        break;

    case 3:
        // 3 - Em duas parcelas: preço normal, sem juros
        printf("O valor final a ser pago é de %.2f", preçoN);
        break;
    
    case 4:
        // 4 - Em duas parcelas: acréscimo de 10% sobre o preço normal
        preçoN = preçoN * (110.0/100);
        printf("O valor final a ser pago é de %.2f", preçoN);
        break;
    
    default:
        printf("Esta forma de pagamento é invalida, tente novamente");
        break;
    }

    
    return 0;

}

