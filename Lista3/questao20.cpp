#include <stdio.h>
#include <locale.h>

// Leia:
// • primeiro número;
// • segundo número;
// • operação desejada (+, -, * ou /).
// Realize a operação escolhida e apresente o resultado.
// O algoritmo deverá verificar a tentativa de divisão por zero.

int main(){

    setlocale(LC_ALL, ".UTF-8");

    float num1, num2, calc;
    int options;

    printf("Digite o 1º valor\n");
    scanf("%f", &num1);

    printf("Digite o 2º valor\n");
    scanf("%f", &num2);

    printf("\n----Digite o número equivalente a operação que você deseja realizar----\n");
    printf("1 para soma\n");
    printf("2 para subtração\n");
    printf("3 para multiplicação\n");
    printf("4 para divisão\n");
    scanf("%d", &options);

    switch (options)
    {
        case 1 : // soma
            calc = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, calc);
            break;
        
        case 2 : // subtração
            calc = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, calc);
            break;

        case 3 : // multiplicação
            calc = num1 * num2;
            printf("%.2f x %.2f = %.2f", num1, num2, calc);
            break;

        case 4 : // divisão
            calc = num1 / num2;
            if (num2 == 0)
            {
                printf("Não existe divisão por 0\n");
                break;
            }
            printf("%.2f ÷ %.2f = %.2f", num1, num2, calc);
            break;

        default:
            printf("Essa opção é inválida\n");
            break;
    }

    return 0;
}

