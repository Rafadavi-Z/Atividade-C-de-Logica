#include <stdio.h>
#include <locale.h>

// Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal utilizando as seguintes fórmulas:
// • Para homens:
// peso ideal = (72,7 × altura) - 58
// • Para mulheres:
// peso ideal = (62,1 × altura) - 44,7 

int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    int sexo;
    float altura;

    printf("Informe a sua altura em m\n");
    scanf("%f", &altura);

    printf("Informe o seu o sexo\n");
    printf("0 = feminino\n1 = masculino\n");
    scanf("%d", &sexo);

    if (sexo != 0)
    {
        // homem
        altura = (72.7 * altura) - 58;
        printf("O seu peso ideial é %.2f\n", altura);
    }
    else
    {
        // mulher
        altura = (62.1 * altura) - 44.7;
        printf("O seu peso ideial é %.2f\n", altura);
    }
    
    return 0;

}

