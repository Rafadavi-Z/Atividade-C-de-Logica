#include <stdio.h>
#include <locale.h>

// Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float vetor[5];

    int i, maior_valor, menor_valor;

    printf("Digite 5 números\n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%f", &vetor[i]);

        if(i == 0)
        {
            maior_valor = i;
            menor_valor = i;
        }
        else
        {
            if (vetor[maior_valor] < vetor[i])
            {
                maior_valor = i;
            }
            if (vetor[menor_valor] > vetor[i])
            {
                menor_valor = i;
            }
        }      
    }

    printf("O maior valor pertence a vetor[%d], com o conteúdo de %.2f\n", maior_valor, vetor[maior_valor]);
    printf("O menor valor pertence a vetor[%d], com o conteúdo de %.2f\n", menor_valor, vetor[menor_valor]);

    return 0;
}

