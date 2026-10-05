#include <stdio.h>
#include <locale.h>
#include <math.h>

// Ler um conjunto de números reais
// armazenando-o em vetor e calcular o quadrado dos componentes deste vetor 
// armazenando o resultado em outro vetor. 
// Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float base[10], resultado[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um número qualquer que irá na posição %d do Array\n", i);
        scanf("%f", &base[i]);
        resultado[i] = pow(base[i], 2);
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("base[%d] tem como valor %.2f e seu quadrado está em resultado[%d] e é %.2f\n", i, base[i], i, resultado[i]);
    }

    return 0;
}

