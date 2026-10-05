#include <stdio.h>
#include <locale.h>

// Um posto vende gasolina por determinado valor por litro. Leia:
// • quantidade de litros abastecidos;
// • preço do litro.
// Se o cliente abastecer:
// • menos de 20 litros → sem desconto;
// • entre 20 e 40 litros → 3% de desconto;
// • mais de 40 litros → 5% de desconto.
// Apresente o valor bruto, desconto e valor final.

int main() {

    setlocale(LC_ALL, ".UTF-8");

    float litros, val_li, bru, fin;

    printf("Digite a quantidade de litros abastecido\n");
    scanf("%f", &litros);

    printf("Qual é o preço do litro?\n");
    scanf("%f", &val_li);

    bru = litros * val_li;

    if (litros > 40)
    {
        fin = bru * (95.0/100);
    }
    else if (litros <=40 && litros > 20)
    {
        fin = bru * (97.0/100);
    }
    else
    {
        fin = bru;
    }

    printf("O valor bruto ficou R$%.2f\nTeve desconto de R$%.2f\nO valor final é R$%.2f", bru, (bru - fin), fin);

    return 0;
}




