#include <stdio.h>
#include <locale.h>

// Fazer um programa para ler 5 valores e, em seguida, 
// mostrar todos os valores lidos juntamente com o maior, o menor e a média dos valores.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float vetor[5], total = 0;

    int i, maior_valor, menor_valor;

    printf("Digite 5 números\n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%f", &vetor[i]);
        total += vetor[i];

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

    for (i = 0; i < 5; i++)
    {
        printf("A[%d] tem como valor %.2f\n", i, vetor[i]);
    }
    
    printf("O maior valor é %.2f\n", vetor[maior_valor]);
    printf("O menor valor é %.2f\n", vetor[menor_valor]);
    printf("A média dos valores é %.2f\n", total / 5);

    return 0;
}

