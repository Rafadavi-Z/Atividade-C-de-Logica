#include <stdio.h>
#include <locale.h>

// Faça um algoritmo que leia um número.
// • Caso ele seja positivo, calcule o seu dobro.
// • Caso ele seja negativo, calcule o seu triplo.

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int a;

    printf("Digite um número qualquer\n");
    scanf("%d", &a);

    if (a > 0)
    {
        a = a * 2;
        printf("O número é positivo, logo seu dobro é %d\n", a);
    }
    else if (a < 0)
    {
        a = a * 3;
        printf("O número é negativo, logo seu triplo é %d\n", a);
    }
    else
    {
        printf("Você botou o 0...");
    }

    
    return 0;

}

