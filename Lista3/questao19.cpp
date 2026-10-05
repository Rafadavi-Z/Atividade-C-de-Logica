#include <stdio.h>
#include <locale.h>
#include <math.h>

// Leia o peso e a altura de uma pessoa. Calcule:
// IMC = peso / altura²
// Classifique o resultado:
// • abaixo de 18,5 → Abaixo do peso
// • 18,5 a 24,9 → Peso adequado
// • 25,0 a 29,9 → Sobrepeso
// • 30,0 ou mais → Obesidade


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