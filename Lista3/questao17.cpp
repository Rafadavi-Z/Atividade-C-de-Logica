#include <stdio.h>
#include <locale.h>

// Uma loja oferece desconto de acordo com o valor da compra:
// • até R$ 100,00 → sem desconto;
// • de R$ 100,01 até R$ 500,00 → 5% de desconto;
// • acima de R$ 500,00 → 10% de desconto.
// Leia o valor da compra e apresente: valor original; percentual de desconto; valor do desconto; valor final.


int main(){

    setlocale(LC_ALL, ".UTF-8");

    float compra;

    printf("Digite o valor da compra\n");
    scanf("%f", &compra);

    if (compra <= 100)
    {
        printf("O valor original é de R$ %.2f\n", compra);
        printf("Como não vai ter desconto o valor final é de R$ %.2f mesmo\n", compra);
    }
    else if (compra > 100 && compra <= 500)
    {
        printf("O valor original é de R$ %.2f\n", compra);
        printf("Você ganhou 5%% de desconto, logo vai economizar R$ %.2f\n", compra * (5.0/100));
        printf("Assim o valor final ficou em R$ %.2f", compra * (95.0/100));
    }
    else
    {
        printf("O valor original é de R$ %.2f\n", compra);
        printf("Você ganhou 10%% de desconto, logo vai economizar R$ %.2f\n", compra * (10.0/100));
        printf("Assim o valor final ficou em R$ %.2f", compra * (80.0/100));
    }

    return 0;
}

