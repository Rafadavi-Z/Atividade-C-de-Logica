#include <stdio.h>

// Faça um programa que calcule e mostre a área de um triângulo. Sabe-se que: Área = (base * altura)/2.

int main(){
   
    float base, altura, resultado; 
	
    printf("Digite o valor da base do triangulo\n");
    scanf("%f",&base);

    printf("Digite o valor da altura do triangulo\n");
    scanf("%f",&altura);

    resultado = (base * altura)/2;

    printf("A area do triangulo e de %.2f", resultado);

    return 0;
}
