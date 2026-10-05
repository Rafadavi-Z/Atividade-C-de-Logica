#include <stdio.h>
#include <locale.h>

// Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int A[6];

    int i;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%d", &A[i]);
    }
    
    for (i = 0; i < 6; i++)
    {
        printf("A[%d] tem como valor %d\n", i, A[i]);
    }

    return 0;
}

