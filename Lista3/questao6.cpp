#include <stdio.h>

// Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Area= π * r²

#include <math.h>

int main(){
   
    float raio, resultado; 
	
    printf("Digite o valor do raio do circulo\n");
    scanf("%f",&raio);

    resultado = 3.14159265359 * pow(raio,2);

    printf("A area do circulo e de %.2f", resultado);

    return 0;
}
