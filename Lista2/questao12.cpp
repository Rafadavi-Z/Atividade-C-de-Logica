#include <stdio.h>
#include <locale.h>

// Escreva um algoritmo que leia:

// • o número de identificação do aluno;
// • três notas obtidas nas avaliações;
// • a média dos exercícios.

// Calcule a média de aproveitamento utilizando a fórmula:
// MA = (nota1 + nota2 × 2 + nota3 × 3 + ME) / 7
// Em seguida, atribua o conceito conforme a tabela:

// MA ≥ 90 = A
// 75 ≤ MA < 90 = B
// 60 ≤ MA < 75 = C
// 40 ≤ MA < 60 = D
// MA < 40 = E

// O algoritmo deverá apresentar:
// • número de identificação do aluno;
// • nota 1;
// • nota 2;
// • nota 3;
// • média dos exercícios;
// • média de aproveitamento;
// • conceito obtido;
// • situação final.

// A situação deverá ser:
// • Aprovado, para conceitos A, B ou C;
// • Reprovado, para conceitos D ou E.


int main(){

    setlocale(LC_ALL, ".UTF-8");
    
    float nota1, nota2, nota3, me, ma;
    int matricula;

    printf("Informe sua matricula\n");
    scanf("%d", &matricula);

    printf("Informe suas 3 notas\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Informe sua média de exercicios\n");
    scanf("%f", &me);

    ma = (nota1 + (nota2 * 2) + (nota3 * 3) + me) / 7;

    printf("Seu número de identificação é %d\n", matricula);

    printf("Sua nota 1 é %.2f e a nota 2 é %.2f e a nota 3 é %.2f\n", nota1, nota2, nota3);

    printf("Sua média de exercicos é %.2f\n", me);

    printf("Sua média de aproveitamento é %.2f\n", ma);

    if (ma >= 9.0)
    {
        printf("Sua classificação é A\n");
    }
    else if (ma >= 7.5 && ma < 9.0)
    {
        printf("Sua classificação é B\n");
    }
    else if (ma >= 6.0 && ma < 7.5)
    {
        printf("Sua classificação é C\n");
    }
    else if (ma >= 4.0 && ma < 6.0)
    {
        printf("Sua classificação é D\n");
    }
    else
    {
        printf("Sua classificação é E\n");
    }
    
    (ma >= 6.0) ? printf("Você está aprovado") : printf("Você está reprovado");

    
    return 0;

}

