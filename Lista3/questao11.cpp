#include <stdio.h>
#include <locale.h>

// Leia a idade de uma pessoa. Apresente:
// • "Maior de idade", caso tenha 18 anos ou mais;
// • "Menor de idade", caso contrário.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int idade;

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Você é maior de idade");
    }
    else
    {
        printf("Você é menor de idade");
    }

    return 0;
}

