#include <stdio.h>
#include <locale.h>

// Escreva um algoritmo que leia três valores inteiros diferentes entre si e apresente-os em ordem decrescente. 

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int a, b, c;

    printf("Digite três números quaisquer diferentes\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("A ordem descrescente dos números é %d %d %d\n", a, b, c);
        }
        else if (c > b)
        {
            printf("A ordem descrescente dos números é %d %d %d\n", a, c, b);
        } 
    }

    else if (b > a && b > c)
    {
        if (a > c)
        {
            printf("A ordem descrescente dos números é %d %d %d\n", b, a, c);
        }
        else if (c > a)
        {
            printf("A ordem descrescente dos números é %d %d %d\n", b, c, a);
        } 
    }

    else if (c > a && c > b)
    {
        if (a > b)
        {
            printf("A ordem descrescente dos números é %d %d %d\n", c, a, b);
        }
        else if (b > a)
        {
            printf("A ordem descrescente dos números é %d %d %d\n", c, b, a);
        } 
    }
    
    return 0;

}

