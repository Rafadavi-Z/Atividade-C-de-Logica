#include <stdio.h>
#include <locale.h>

// Desenvolva um programa em C que apresente ao usuário o cardápio de um restaurante com cinco opções de pratos:

// 1 - Hambúrguer com fritas - R$ 28,00
// 2 - Filé de frango grelhado - R$ 32,00
// 3 - Lasanha à bolonhesa - R$ 35,00
// 4 - Filé de peixe com arroz - R$ 42,00
// 5 - Salada especial - R$ 25,00

// O programa deverá solicitar ao usuário que informe o código do prato desejado.
// Utilize a estrutura switch para identificar a opção selecionada e apresentar na tela o nome do prato escolhido e seu respectivo valor.
// Caso seja informado um código que não corresponda a nenhuma das opções disponíveis, o programa deverá apresentar a mensagem "Opção inválida".


int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int cardapio;

    printf("O que você deseja?\n1 - Hambúrguer com fritas\n2 - Filé de frango grelhado\n3 - Lasanha à bolonhesa\n4 - Filé de peixe com arroz\n5 - Salada especial\nDigite o número do prato que você deseja\n");
    scanf("%d", &cardapio);

    switch (cardapio)
    {
    case 1:

        printf("O valor do prato é de R$ 28,00");
        break;
    
    case 2:

        printf("O valor do prato é de R$ 32,00");
        break;

    case 3:
        printf("O valor do prato é de R$ 35,00");
        break;
    
    case 4:
        printf("O valor do prato é de R$ 42,00");
        break;

    case 5:
        printf("O valor do prato é de R$ 25,00");
        break;
    
    default:
        printf("Este prato não existe, tente novamente");
        break;
    }



}

