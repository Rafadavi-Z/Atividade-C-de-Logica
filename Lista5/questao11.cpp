#include <stdio.h>
#include <locale.h>

// Faça um programa que preencha um vetor com 10 números reais
// calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float vetor[10], soma_positivo = 0;

    int i, quantidade_negativo = 0;

    printf("Digite 10 números\n");

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%f", &vetor[i]);

        if (vetor[i] > 0)
        {
            soma_positivo += vetor[i];            
        }
        else if (vetor[i] < 0)
        {
            quantidade_negativo++;
        }   
    }
    
    printf("A quantidade de números negativos foi %d\nA soma do números positivos deu %.2f", quantidade_negativo, soma_positivo);

    return 0;
}

