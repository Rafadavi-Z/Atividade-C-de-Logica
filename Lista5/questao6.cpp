#include <stdio.h>
#include <locale.h>

// Faça um programa que receba do usuário um vetor com 10 posições.
// Em seguida deverá ser impresso o maior e o menor elemento do vetor.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float vetor[10], big_e, tiny_e;

    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%f", &vetor[i]);
        if(i == 0)
        {
            big_e = vetor[i];
            tiny_e = vetor[i];
        }
        else
        {
            if (big_e < vetor[i])
            {
                big_e = vetor[i];
            }
            if (tiny_e > vetor[i])
            {
                tiny_e = vetor[i];
            }
        }
    }
    
    printf("O maior valor do Array é %.2f e o menor é %.2f\n", big_e, tiny_e);

    return 0;
}

