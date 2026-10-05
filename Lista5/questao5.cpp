#include <stdio.h>
#include <locale.h>

// Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int vetor[10];

    int i, pares = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            pares++;
        }
    }
    
    if (pares == 0)
    {
        printf("O array não tem nenhum valor par\n");
    }
    else if (pares == 1)
    {
        printf("O array possui um único valor par\n");
    }
    else
    {
        printf("O array possui %d valores pares\n", pares);    
    }

    return 0;
}

