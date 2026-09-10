#include <stdio.h>
#include <locale.h>

// Faça um algoritmo que leia dois valores inteiros, A e B.
// • Se os valores forem iguais, some A + B.
// • Caso sejam diferentes, multiplique A * B

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int a, b, c;

    printf("Digite dois números quaisquer\n");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        c = a + b;
        printf("Os números são iguais, logo a soma deles é %d\n", c);
    }
    else
    {
        c = a * b;
        printf("Os números são diferentes, logo a multiplicação deles é %d\n", c);
    }

    
    return 0;

}

