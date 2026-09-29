#include <stdio.h>
#include <locale.h>

// Leia:
// • quantidade de horas trabalhadas;
// • valor recebido por hora.
// Calcule e apresente o salário bruto do funcionário.


int main(){

    setlocale(LC_ALL, ".UTF-8");

    int horas;
    float val_h;

    printf("Digite a quantidade de horas trabalhadas\n");
    scanf("%d", &horas);

    printf("O valor da sua hora é de R$ ");
    scanf("%f", &val_h);

    val_h = horas * val_h;

    printf("O salário bruto é de R$ %.2f", val_h);

    return 0;
}

