#include <stdio.h>

// Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

int main(){
    
    float nota1, nota2, nota3, media_a;
    
    printf("Digite o valor da nota1 ");
    //scanf("%.2f",&nota1); -----> aqui está o erro de não mostrar os decimais
    scanf("%f",&nota1);
    printf("Digite o valor da nota2 ");
    //scanf("%.2f",&nota2);
    scanf("%f",&nota2);
    printf("Digite o valor da nota3 ");
    //scanf("%.2f",&nota3);
    scanf("%f",&nota3);

    media_a = (nota1 + nota2 + nota3)/3;

    printf("Seu resultado e %.2f", media_a);

    return 0;
}

// scanf não aceita %.2f, isso é do printf, no scanf só %f já é o suficiente

//%.2f means "display the float with 2 decimal places"
//printf("%f", media_a);     // 8.250000
//printf("%.2f", media_a);   // 8.25
//printf("%.1f", media_a);   // 8.3