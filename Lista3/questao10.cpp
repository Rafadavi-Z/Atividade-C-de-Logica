#include <stdio.h>
#include <locale.h>

// Leia:
// • nome de um produto;
// • quantidade comprada;
// • preço unitário.
// Calcule e apresente o valor total da compra.


int main(){

    setlocale(LC_ALL, ".UTF-8");

    char prod[10];
    int quant;
    float valor;

    printf("Qual produto você deseja?\n");
    scanf("%s", prod);

    printf("Quanto é o preço de %s?\n", prod);
    scanf("%f", &valor);   

    printf("Qual a quantidade de %s você vai levar?\n", prod);
    scanf("%d", &quant);

    printf("O valor total ficou R$%.2f", (quant * valor));

    return 0;
}

