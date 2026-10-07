#include <stdio.h>
#include <locale.h>

// Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int vetor[6], i;

    for (i = 0; i < 6; i++) 
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Os valores digitados na ordem inversa são:\n");

    for (i = 5; i >= 0; i--) 
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}

