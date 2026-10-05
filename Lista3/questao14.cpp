#include <stdio.h>
#include <locale.h>

// Leia dois números diferentes e apresente qual deles é o maior.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int num1, num2;

    printf("Digite dois números quaisquer\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) 
    {
        printf("%d é maior que %d", num1, num2);
    }
    else if (num1 == num2)
    {
        printf("Ambos os números são iguais\n");
    }
    else
    {
        printf("%d é menor que %d", num1, num2);
    }

    return 0;
}

