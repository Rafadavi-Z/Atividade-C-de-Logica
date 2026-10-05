#include <stdio.h>
#include <locale.h>

// Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
// Imprima o vetor, o maior elemento e a posição que ele se encontra.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int vetor[10], i, maior_e, posicao;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%d", &vetor[i]);
        if(i == 0)
        {
            maior_e = vetor[i];
            posicao = i;
        }
        else
        {
            if (maior_e < vetor[i])
            {
                maior_e = vetor[i];
                posicao = i;
            }
        }
    }
    
    printf("O maior valor está no vetor[%d] e é exatamente %d\n", posicao, maior_e);

    return 0;
}

