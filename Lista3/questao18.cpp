#include <stdio.h>
#include <locale.h>

// Leia a idade de uma pessoa e classifique-a como:
// • 0 a 12 anos → Criança
// • 13 a 17 anos → Adolescente
// • 18 a 59 anos → Adulto
// • 60 anos ou mais → Idoso

int main(){

    setlocale(LC_ALL, ".UTF-8");

    int idade;

    printf("Quantos anos você tem?\n");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("Criança");
    }
    else if (idade > 12 && idade <= 17)
    {
        printf("Adoslecente");
    }
    else if (idade > 17 && idade <= 59)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }

    return 0;
}

