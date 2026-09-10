#include <stdio.h>
#include <locale.h>

// Faça um algoritmo que receba um número inteiro qualquer e informe se ele é par ou ímpar.

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int num;

    printf("Digite um número qualquer\n");
    scanf("%d",&num);

    if (num % 2 == 0) // está checando se o resto da divisão com 2 é igual a 0
    {
        printf("O número é par\n");
    }
    else
    {
        printf("O número é impar\n");
    }

    
    return 0;

}

