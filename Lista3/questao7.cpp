#include <stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, ".UTF-8");

    float celsius;

    printf("Digite uma temperatura em Celsius\n");
    scanf("%f", &celsius);

    celsius = (celsius * (9.0/5.0)) + 32;

    printf("Esse temperatura em Fahrenheit é %2.f°F", celsius);

    return 0;
}

