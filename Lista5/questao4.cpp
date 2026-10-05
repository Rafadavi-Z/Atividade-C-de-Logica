#include <stdio.h>
#include <locale.h>

// Faça um programa que leia um vetor de 8 posições e, em seguida, 
// leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
// Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float vetor[8];

    int i, x, y;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o valor que irá na posição %d do Array\n", i);
        scanf("%f", &vetor[i]);
    }
    
    printf("Agora digite 2 posições do vetor na qual você deseja somar os valores\n");
    scanf("%d %d", &x, &y);

    if(x > 7 || y > 7 || x < 0 || y < 0)
    {
        printf("O vetor vai dá posição 0 até a posição 7, lembra?");
    }
    else
    {
        printf("A soma de vetor[%d] e vetor[%d] é %.2f\n", x, y, vetor[x] + vetor[y]);
    }


    return 0;
}

