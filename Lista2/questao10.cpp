#include <stdio.h>
#include <locale.h>
#include <math.h>


int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    float altura, peso, IMC;

    printf("Informe a sua altura em m\n");
    scanf("%f", &altura);

    printf("Informe seu peso em kg\n");
    scanf("%f", &peso);

    IMC = peso / pow(altura, 2);

    if (IMC < 18.5)
    {
        printf("Você está abaixo do peso\n");
    }
    else if (IMC >= 18.5 && IMC < 25)
    {
        printf("Você está com o peso normal\n");
    }
    else if (IMC >= 25 && IMC < 30)
    {
        printf("Você está acima do peso\n");
    }
    else
    {
        printf("Você está obeso\n");
    }
    
    
    
    return 0;

}

