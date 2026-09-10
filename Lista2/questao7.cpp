#include <stdio.h>
#include <locale.h>

// Faça um algoritmo que leia um número inteiro.
// • Caso seja par, some 5 ao seu valor.
// • Caso seja ímpar, some 8 ao seu valor. 

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int num;

    printf("Digite um número qualquer\n");
    scanf("%d",&num);

    if (num % 2 == 0) // está checando se o resto da divisão é igual a 0
    {
        num = num + 5;
    }
    else
    {
        num = num + 8;
    }

    printf("O número novo é %d\n", num);

    return 0;

}

