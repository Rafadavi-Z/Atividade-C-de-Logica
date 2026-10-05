#include <stdio.h>
#include <locale.h>

// Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
// (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
// (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
// (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
// (d) Mostre na tela cada valor do vetor A, um em cada linha.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int A[6] = {1, 0, 5, -2, -5, 7};

    int i, soma;

    soma = A[0] + A[1] + A[5];

    printf("A soma dos valores nas posições 0, 1 e 5 é %d\n", soma);

    for (i = 0; i < 6; i++)
    {
        if(i == 4)
        {
            A[i] = 100;
        }
        printf("O valor que está na posição %d do Array, ou seja A[%d] é %d\n", i, i, A[i]);
    }
    

    return 0;
}

