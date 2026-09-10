#include <stdio.h>
#include <locale.h>

// Faça um algoritmo que leia três valores inteiros A, B e C e informe se a soma de A + B é menor que C

int main(){
    setlocale(LC_ALL, ".UTF-8");
    
    int a, b, c;
    
    printf("Digite o valor dos dois primeiros números\n");
    scanf("%d %d", &a, &b);

    printf("Digite o valor do terceiro número\n");
    scanf("%d",&c);

    if (a + b < c)
    {
        printf("%d + %d é menor que %d", a, b, c);    
    }
    else if (a + b == c)
    {
        printf("%d + %d é igual a %d", a, b, c);
    }
    else
    {
        printf("%d + %d é maior que %d", a, b, c);
    }
    

    return 0;

}

