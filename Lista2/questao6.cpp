#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

// Escreva um algoritmo que leia dois valores booleanos (lógicos) e 
// determine se ambos são VERDADEIROS ou se ambos são FALSOS.

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int va1, va2;

    printf("Digite 0 para falso e qualquer outro número inteiro para verdadeiro duas vezes\n");
    scanf("%d %d", &va1, &va2);

    bool a = va1;
    bool b = va2;

    if (a == true && b == true)
    {
        printf("Ambos são verdadeiros\n");
    }
    else if (a == false && b == false)
    {
        printf("Ambos são falsos\n");
    }
    else
    {
        printf("Um é falso e outro é verdadeiro\n");
    }

    return 0;

}

