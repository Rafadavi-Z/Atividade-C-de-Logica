#include <stdio.h>
#include <locale.h>

// Leia um número e informe se ele é: positivo; negativo; zero.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int n;

    printf("Qual o número?\n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Número positivo");
    }
    else if (n < 0)
    {
        printf("Número negativo");
    }
    else
    {
        printf("É o zero");
    }

    return 0;
}

