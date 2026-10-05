#include <stdio.h>
#include <locale.h>

// Leia:
// • distância percorrida em quilômetros;
// • quantidade de combustível utilizada em litros.
// Calcule o consumo médio do veículo em km/L.



int main(){

    setlocale(LC_ALL, ".UTF-8");

    float km, comb;

    printf("Digite a distância percorrida em quilômetros\n");
    scanf("%f", &km);

    printf("Qual a quantidade de combustível utilizada em litros?\n");
    scanf("%f", &comb);

    printf("O consumo médio do veículo é %.2f km/L", (km/comb));

    return 0;
}

