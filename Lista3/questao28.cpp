#include <stdio.h>
#include <locale.h>

// Leia 10 números e determine qual foi o maior número informado.


int main(){

    setlocale(LC_ALL, ".UTF-8");

    float N, dummy;
    int i = 1;

    printf("Você irá informar 10 números\n");

    for (i; i <= 10; i++)
    {
        printf("Informe o %dº número\n", i);
        scanf("%f", &N);
        if(i == 1) // no primeiro loop dummy irá receber o primeiro valor de qualquer jeito
        {
            dummy = N;
        }
        else if (dummy < N) // depois disso, o algoritmo irá ficar comparando os valores e caso encontre um maior, irá sobrescrever-lo no dummy
        {
            dummy = N;
        }
    }

    printf("O maior valor informado foi %.2f", dummy);
    return 0;
}




